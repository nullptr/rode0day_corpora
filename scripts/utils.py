import glob
import hashlib
import json
import sys
import os
import logging
import resource
import shlex
import tempfile
from subprocess import run, Popen, PIPE, DEVNULL, STDOUT, TimeoutExpired

import drcov
try:
    import exploitable
except ImportError:
    pass

DRRUN = '/opt/dr/bin64/drrun'
DRRUN32 = '/opt/dr/bin32/drrun'
DR2LCOV = '/opt/dr/tools/bin64/drcov2lcov'
DR2LCOV32 = '/opt/dr/tools/bin32/drcov2lcov'

logging.basicConfig(format='%(levelname)s:\t%(message)s')
logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)


def safe_json(text):
    try:
        j = json.loads(text)
    except ValueError:
        print("Invalid response from server:\n\t{}".format(text))
        sys.exit(1)
        return {'success': False}
    return j


def sha1sum(file_path):
    with open(file_path, 'rb') as f:
        m = hashlib.sha1()
        m.update(f.read())
        return m.hexdigest()


# stolen from https://github.com/ForAllSecure/bncov
def is64bit(binary_filepath):
    with open(binary_filepath, "rb") as f:
        data = f.read(32)
    e_machine = data[18]
    if isinstance(e_machine, str):  # python2/3 compatibility, handle e_machine as string or value
        e_machine = ord(e_machine)
    if e_machine == 0x03:  # x86
        return False
    elif e_machine == 0x3e:  # x64
        return True
    raise Exception("[!] Unexpected value in 64-bit check: %s (e_machine: 0x%x)" % (binary_filepath, e_machine))


def parse_lava_log(log, match_id=None):
    r = {'bug_id': None, 'src_line': ""}
    lava = log.find(b'LAVALOG:')
    msg = log[lava:].split(maxsplit=3)
    r['bug_id'] = msg[1].strip()[:-1].decode('utf-8')
    r['src_line'] = msg[2].split(b'\n')[0].strip().decode('utf-8')
    if match_id:
        r['match'] = (r['bug_id'] == match_id)
    return r


def set_mem_limit(limit=1):
    soft, hard = resource.getrlimit(resource.RLIMIT_AS)
    memlimit = 2**30 * limit  # 1 GB
    resource.setrlimit(resource.RLIMIT_AS, (memlimit, memlimit))


class VerifyWorker(object):

    def __init__(self, challenge, base_dir, prefix='lava-install'):
        self.challenge = challenge
        self.install_dir = challenge['install_dir']
        self.binary_path = challenge['binary_path']
        self.base_dir = base_dir
        self.prefix = prefix
        self.use_stdin = '{input_file}' not in challenge['binary_arguments']

        source_dir = os.path.join(base_dir, self.install_dir, 'src', 'src')
        self.source_dir = source_dir if os.path.isdir(source_dir) else None

    def get_target_command(self, input_file, lavalog=False):
        lava_dir = os.path.join(self.base_dir, self.install_dir, self.prefix)
        local_dir = os.path.join(self.base_dir, self.install_dir)
        if lavalog and os.path.isdir(lava_dir):
            binary = os.path.join(lava_dir, self.binary_path.replace('built/', ''))
        else:
            binary = os.path.join(local_dir, self.binary_path)
        if not os.path.isfile(binary):
            logger.info("Skipping: %s; did not find binary.", binary)
            return None
        library_dir = None
        if "library_dir" in self.challenge.keys():
            library_dir = os.path.join(local_dir, self.challenge["library_dir"])
        args = self.challenge["binary_arguments"].format(input_file=input_file, install_dir=local_dir)
        if library_dir:
            command = "LD_LIBRARY_PATH={} {} {}".format(library_dir, binary, args)
        else:
            command = "{binary} {args}".format(binary=binary, args=args)
        return command

    def get_coverage_stats(self, cov, module_name):
        trace, edge_trace = cov.get_traces(module_name)
        return {'bb_all': cov.bb_table_count,
                'bb_ma': len(trace),
                'bb_mu': len(set(trace))}

    def run_with_dynamorio(self, input_file):
        """
        Run the program with Dynamorio's drcov tool and capture basic block coverage.
           If the  source directory is present, assume the binary has symbols (non stripped),
           and collect an lcov 'coverage.info' file for source line coverage.
        """

        tgt_cmd = self.get_target_command(input_file, lavalog=self.source_dir is not None)
        tgt_cmd = shlex.split(tgt_cmd)

        is64 = is64bit(tgt_cmd[0])
        drrun = DRRUN if is64 else DRRUN32
        dr2lcov = DR2LCOV if is64 else DR2LCOV32
        stdin_fd = open(input_file, 'rb') if self.use_stdin else DEVNULL
        with tempfile.TemporaryDirectory() as out:
            args = [drrun, '-t', 'drcov', '-logdir', out, '--']+tgt_cmd
            logger.info("%s", " ".join(args))
            try:
                run(args, stdin=stdin_fd, stdout=DEVNULL, stderr=DEVNULL, timeout=30)
            except TimeoutExpired:
                logger.error("Timeout in drrun")
            files = glob.glob("{}/*.log".format(out))
            cov = drcov.DrcovData(files[0]) if files else None
            if cov is None:
                logger.error("ERROR: failed to get coverage")
                return None
            binary = os.path.split(self.binary_path)[-1]
            stats = self.get_coverage_stats(cov, binary)

            if self.source_dir:
                cov_file = os.path.join(out, 'coverage.info')
                args = [dr2lcov, '-dir', out, '-output', cov_file, '-mod_filter', binary]
                logger.info("%s", ' '.join(args))
                run(args, stdout=DEVNULL, stderr=DEVNULL)
            else:
                logger.error("NO SOURCE: %s", self.install_dir)
        if self.use_stdin:
            stdin_fd.close()

        return stats

    def run_exploitable(self, crash):
        """
        Run the program in gdb with the exploitable  GDB plugin (https://gitlab.com/wideglide/exploitable)
          originally from  Jonathan Fooote -- https://github.com/jfoote/exploitable
        """

        gdb_exploitable_path = os.path.join(exploitable.__path__[0], "exploitable.py")
        tgt_cmd = self.get_target_command('.current_input')
        tgt_cmd, gdb_tgt_cmd = tgt_cmd.split(' ', 1)

        script = "source {}\nfile {}\n run {}\n exploitable -m \nquit\n".format(
            gdb_exploitable_path,
            tgt_cmd,
            gdb_tgt_cmd)
        with open('.gdb_script', 'w') as f:
            f.write(script)

        gdb_cmd = ["gdb", "-q", "--batch", "-x", ".gdb_script"]
        data = None
        try:
            p = run(gdb_cmd, stdout=PIPE, stderr=STDOUT, timeout=10)
        except TimeoutExpired:
            logger.error("Timeout running exploitable!")
            return None
        for line in p.stdout.splitlines():
            if b"classification" in line:
                data = line.decode(encoding="utf-8", errors="ingore")
            if b'LAVALOG:' in line:
                d = parse_lava_log(line)
        if data is None:
            return None

        jdata = json.loads(data)
        logger.info("\t: %(classification)s\t %(short_description)s", jdata)
        crash.update(jdata)
        return jdata

    def run_binary(self, input_file=None, verbose=True):
        """
        Run the program on the sample input - Just useful to make sure everything is working
          (note programs may have no output with sample inputs)
        """

        using_seed = False
        r = {'returncode': 0, 'bug_id': None, 'src_line': "", 'match': False}
        local_dir = os.path.join(self.base_dir, self.challenge["install_dir"])
        if input_file is None:
            using_seed = True
            input_file = os.path.join(local_dir, self.challenge["sample_inputs"][0])
        tgt_cmd = self.get_target_command(input_file, lavalog=True)
        if tgt_cmd is None:
            return None

        stdin_fd = open(input_file, 'rb') if self.use_stdin else DEVNULL

        logger.info("Executing: %s %s", tgt_cmd, input_file if self.use_stdin else "")
        p = Popen(tgt_cmd, stdin=stdin_fd, stdout=PIPE, stderr=PIPE, shell=True)
        try:
            sout, serr = p.communicate(timeout=15)
        except TimeoutExpired:
            logger.error("timeout expired for: %s", input_file)
            p.kill()
            return r
        finally:
            if self.use_stdin:
                stdin_fd.close()

        r['returncode'] = p.returncode

        lava = serr.find(b'LAVALOG:')
        if lava > 0:
            match_id = os.path.basename(input_file).split('.')[0]
            r.update(parse_lava_log(serr, match_id))
            if not r['match'] or abs(p.returncode) < 3:
                logger.info("BUG: %s\t SRC: %s, RET: %d", r['bug_id'], r['src_line'], p.returncode)
        elif verbose and not (using_seed and p.returncode == 0):
            logger.error("RETURN CODE: %d\n\tSTDOUT: %s\n\tSTDERR: %s\n",
                         p.returncode,
                         sout.decode('utf-8', 'backslashreplace'),
                         serr.decode('utf-8', 'backslashreplace'))
        return r
