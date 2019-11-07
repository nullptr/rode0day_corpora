#!/usr/bin/env python3

import argparse
import logging
import os
import shlex
from subprocess import Popen, PIPE, TimeoutExpired
import sys
import yaml
# from utils import VerifyWorker


COMPS = {2: '18.07',
         3: '18.09',
         4: '18.10',
         5: '18.11',
         6: '19.01',
         7: '19.02',
         8: '19.03',
         9: '19.05',
         10: '19.06',
         11: '19.07',
         12: '19.09',
         13: '19.10'}

logging.basicConfig(format='%(levelname)s:\t%(message)s')
logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)


def parse_info(yaml_file):
    """
    Parse info.yaml for the current competition, return parsed yaml object
    """
    if not os.path.isfile(yaml_file):
        raise RuntimeError("Missing info.yaml file: {}".format(yaml_file))

    info = yaml.load(open(yaml_file))
    return info


def test_run(challenge, base_dir, prefix='lava-install', input_file=None):
    """
    Run the program on the sample input - Just useful to make sure everything is working
      (note programs may have no output with sample inputs)
    """

    test_seeds = False
    local_dir = os.path.join(base_dir, challenge["install_dir"])
    r = {'returncode': -1, 'bug_id': None, 'src_line': "", 'match': False}
    library_dir = None
    if "library_dir" in challenge.keys():
        library_dir = os.path.join(local_dir, challenge["library_dir"])
    binary = os.path.join(local_dir, prefix, challenge["binary_path"].replace('built/', ''))
    if not os.path.isfile(binary):
        logger.info("Skipping: %s; did not find binary.", binary)
        return None
    if input_file is None:
        test_seeds = True
        input_file = os.path.join(local_dir, challenge["sample_inputs"][0])
    args = challenge["binary_arguments"].format(input_file=input_file, install_dir=local_dir)
    if library_dir:
        command = "LD_LIBRARY_PATH={library_dir} {binary} {args}".format(library_dir=library_dir, binary=binary, args=args)
    else:
        command = "{binary} {args}".format(binary=binary, args=args)
    logger.info("Executing: %s", command)
    args = shlex.split(command)
    p = Popen(args, stdin=PIPE, stdout=PIPE, stderr=PIPE)
    try:
        sout, serr = p.communicate(timeout=5)
    except TimeoutExpired:
        logger.error("timeout expired for: %s", input_file)
        return r
    r['returncode'] = p.returncode
    lava = serr.find(b'LAVALOG:')
    if lava > 0:
        msg = serr[lava:].split(maxsplit=3)
        r['bug_id'] = msg[1].strip()[:-1].decode('utf-8')
        r['src_line'] = msg[2].split(b'\n')[0].strip().decode('utf-8')
        r['match'] = (r['bug_id'] == os.path.basename(input_file).split('.')[0])
        if not r['match']:
            logger.error(r)
    elif test_seeds and p.returncode == 0:
        return r
    else:
        logger.error("RETURN CODE: %d\n\tSTDOUT: %s\n\tSTDERR: %s\n",
                     p.returncode,
                     sout.decode('utf-8', 'backslashreplace'),
                     serr.decode('utf-8', 'backslashreplace'))
    return r


def run_tests(info):
    base_dir = str(info['rode0day_id'])
    results = list()
    for challenge_name, challenge in info['challenges'].items():
        r = test_run(challenge, base_dir, prefix=info['prefix'])
        if r is None:
            continue
        # vw = VerifyWorker(challenge, base_dir)
        solutions_dir = os.path.join(base_dir, 'solutions', str(challenge['challenge_id']))
        if not os.path.isdir(solutions_dir):
            solutions_dir = os.path.join(base_dir, 'solutions', str(challenge['install_dir']))
        if not os.path.isdir(solutions_dir):
            logger.info("skipping: %s", solutions_dir)
            continue
        for solution in os.listdir(solutions_dir):
            sol_file = os.path.join(solutions_dir, solution)
            results.append(test_run(challenge, base_dir, prefix=info['prefix'], input_file=sol_file))
            # results.append(vw.run_binary(sol_file))
    validated = [1 for r in results if r['match']]
    logger.info("DONE: %d  of %d bugs validated.", len(validated), len(results))


def run_test(info, challenge_name):
    base_dir = str(info['rode0day_id'])
    results = list()
    challenge = info['challenges'][challenge_name]
    # vw = VerifyWorker(challenge, base_dir)
    test_run(challenge, base_dir, prefix=info['prefix'])

    solutions_dir = os.path.join(base_dir, 'solutions', str(challenge['challenge_id']))
    if not os.path.isdir(solutions_dir):
        solutions_dir = os.path.join(base_dir, 'solutions', str(challenge['install_dir']))
    if not os.path.isdir(solutions_dir):
        return
    for solution in os.listdir(solutions_dir):
        sol_file = os.path.join(solutions_dir, solution)
        # results.append(vw.run_binary(sol_file))
    validated = [1 for r in results if r['match']]
    logger.info("DONE: %d  of %d bugs validated.", len(validated), len(results))


def main():
    parser = argparse.ArgumentParser(description='test Rode0day binaries on inputs')
    parser.add_argument('-c', '--challenge', default=None,
                        help='challenge name/ install_dir')
    parser.add_argument('-p', '--prefix', default='lava-install',
                        help='install directory prefix')
    parser.add_argument('info_yaml', help='file path for info.yaml file')
    args = parser.parse_args()
    info = parse_info(args.info_yaml)
    info['prefix'] = args.prefix
    if args.challenge is not None:
        run_test(info, args.challenge)
    else:
        run_tests(info)


if __name__ == "__main__":
    main()
    sys.exit(0)
