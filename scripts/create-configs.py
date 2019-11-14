#!/usr/bin/env python3

import argparse
import json
import os
import sys
import yaml
from collections import OrderedDict

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


def parse_args():
    p = argparse.ArgumentParser(description="create/update config file[s] for fuzzing jobs")
    p.add_argument("--example", default=None, required=True, help="Template job config file")
    p.add_argument("--yaml", default=None, help="Rode0day 'info.yaml' file (create all job configs)")
    p.add_argument("--config", default="job.json", help="Job config filename (default=job.json)")
    p.add_argument("-j", "--name",  default="AFL", help="Job name prefix (default=AFL)")
    p.add_argument("--prefix", default=None, help="binary path prefix (lava-install)")
    p.add_argument("--fuzzer", default=None, help="path to fuzzer binary")
    p.add_argument("--input", default="inputs", help="seed directory")
    p.add_argument("--output", default="outputs", help="sync directory")
    p.add_argument("-Q", "--qemu", default=False, action='store_true', help="QEMU mode")
    p.add_argument("--file", default=None, help="name of input file (if requited)")
    p.add_argument("--timeout", default=None, help="timout for executions (ms)")
    p.add_argument("--mem-limit", default=None, help="memory limit for child process (MB)")
    p.add_argument("--time-limit", default=None, help="fuzzing campaign time limit")
    p.add_argument("--exec-limit", default=None, help="fuzzing campaign execution limit")
    p.add_argument("--docker", default=None, help="docker container for fuzzing (multi-container mode)")
    p.add_argument("--more-args", dest='afl_margs', default=None, help="extra arguments for fuzzer")
    p.add_argument("--dictionary", dest='dict', default=None, help="AFL/Libfuzzer dictionary file/directory")
    p.add_argument("--master-instances", default=None, help="# of master instances (0-?)")
    p.add_argument("--afl-no-det", dest="dirty", default=None, help="AFL quick & dirty (skip deterministic steps")
    p.add_argument("--afl-dumb", dest="dumb", default=None, help="AFL fuzz without instrumentation (dumb mode)")
    p.add_argument("--environment", default=None, help="Environment variables, comma separated list of VAR=VAL ")
    p.add_argument("--extras", default=None, help="Extra options, comma separate list of var=val")
    return p.parse_args()


def ordered_load_yaml(stream, Loader=yaml.Loader, object_pairs_hook=OrderedDict):
    class OrderedLoader(Loader):
        pass

    def construct_mapping(loader, node):
        loader.flatten_mapping(node)
        return object_pairs_hook(loader.construct_pairs(node))
    OrderedLoader.add_constructor(
        yaml.resolver.BaseResolver.DEFAULT_MAPPING_TAG,
        construct_mapping)
    return yaml.load(stream, OrderedLoader)


def ordered_load_json(stream):
    return json.load(stream, object_pairs_hook=OrderedDict)


def update_with_args(args, example):
    for k, v in args.__dict__.items():
        if k in ['yaml', 'example', 'config', 'prefix', 'name']:
            continue
        if v is not None:
            example[k] = v


def build_description(args, data, comp_date):
    desc = ['XXXX']
    if args.time_limit:
        desc.append(args.time_limit)
    if args.qemu:
        desc.append("qemu")
    desc.append(data['install_dir'])
    desc.append("M=1 N=4 YYYY")
    desc.append("20{}".format(comp_date))
    desc.append("ZZZZ")
    return ' '.join(desc)


def add_extras(args, example):
    if args.extras is None:
        return
    for extra in args.extras.split(','):
        k, v = extra.split('=')
        example.update({k: v})


def write_config(config, path):
    json.dump(config, open(path, 'w'), indent=4)


def create_jobs_from_yaml(args, example):
    with open(args.yaml) as f:
        basedir = os.path.dirname(os.path.abspath(args.yaml))
        data = ordered_load_yaml(f)

    comp_date = COMPS[data['rode0day_id']]

    binary_args = {'input_file': '@@', 'install_dir': '.'}
    for name, d in data['challenges'].items():
        sys.stdout.write("{};".format(name))

        for k, v in d.items():
            sys.stdout.write("{};".format(v))
        if 'challenge_id' in d:
            example['target_info']['challenge_id'] = d['challenge_id']
        if 'architecture' in d:
            example['target_info']['architecture'] = d['architecture']
        if 'known_bugs' in d:
            example['target_info']['known_bugs'] = d['known_bugs']
        if 'install_dir' in d:
            example['target_info']['name'] = d['install_dir']
            example['session'] = d['install_dir']
            example['name'] = "{} {} XXXX".format(args.name, d['install_dir'])
        if 'binary_path' in d:
            if args.prefix:
                bin_path = d['binary_path'].replace("built/", "")
                example['target'] = "./{}/{}".format(args.prefix, bin_path)
            else:
                example['target'] = "./{}".format(d['binary_path'])
        if 'binary_arguments' in d:
            example['cmdline'] = d['binary_arguments'].format(**binary_args)

        example['description'] = build_description(args, d, comp_date)
        example['target_info']['source'] = "rode0day 20{}".format(comp_date)

        update_with_args(args, example)
        add_extras(args, example)

        path = os.path.join(basedir, d['install_dir'], args.config)
        write_config(example, path)
        sys.stdout.write("\n")


def main():
    args = parse_args()
    if args.environment is not None:
        args.environment = args.environment.split(",")
    if args.example is not None:
        with open(args.example) as f:
            example = ordered_load_json(f)

    if args.yaml and example:
        if os.path.exists(args.yaml):
            create_jobs_from_yaml(args, example)
            return

    if example is not None:
        update_with_args(args, example)
        add_extras(args, example)
        if args.config != 'job.json':
            write_config(example, args.config)
        else:
            write_config(example, args.example)


if __name__ == '__main__':
    main()
