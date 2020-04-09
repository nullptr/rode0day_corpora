#!/usr/bin/env python3

import os
import argparse
import sys
import yaml
from utils import VerifyWorker

base_url = 'https://example.org'


def parse_info(yaml_file):
    if not os.path.isfile(yaml_file):
        raise RuntimeError("Missing info.yaml file: {}".format(yaml_file))

    info = yaml.load(open(yaml_file))
    return info


def main():
    parser = argparse.ArgumentParser(description='verify Rode0day crashes')
    parser.add_argument('-c', '--challenge', default=None,
                        help='challenge name/ install_dir')
    parser.add_argument('-p', '--prefix', default='lava-install',
                        help='install directory prefix')
    parser.add_argument('info_yaml', nargs='+', help='file path for info.yaml file')
    args = parser.parse_args()

    if not os.path.isfile(args.info_yaml):
        print("ERROR: {} not found".format(args.info_yaml))
        sys.exit(1)

    info = parse_info(args.info_yaml)
    if args.challenge not in info['challenges']:
        print("ERROR: {} not a valid challenge name".format(args.challenge))
        sys.exit(1)

    challenge = info['challenges'][args.challenge]

    base_dir = str(info['rode0day_id'])

    vw = VerifyWorker(challenge, base_dir, args.prefix, base_url, online=True)
    vw.process_crashes(limit=10)


if __name__ == "__main__":
    main()
    sys.exit(0)
