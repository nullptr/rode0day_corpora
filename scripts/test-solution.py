#!/usr/bin/env python3

import argparse
import logging
import os
import sys
import yaml
from utils import VerifyWorker


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


def print_results(results):
    validated = len([1 for r in results if r['match']])
    exited = len(1 for r in results if r['returncode'] == 0)
    total = len(results)

    if validated > 0:
        r = [validated, validated, total, float(validated / total * 100.0)]
        logger.info("DONE: %d bugs validated.\n\tBug coverage: %d / %d (%0.1f%%) covered ", *r)
    else:
        logger.info("DONE: %d of %d inputs ran cleanly.", exited, total)


def run_tests(info, challenge_name=None):
    results = list()

    if challenge_name is not None:
        if challenge_name not in info['challenges']:
            logger.error("Challenge name '%s' not found!", challenge_name)
            return
        challenge = info['challenges'][challenge_name]
        r = run_test(info, challenge)
        if r is not None:
            print_results(r)
        return

    for challenge_name, challenge in info['challenges'].items():
        r = run_test(info, challenge)
        if r is None:
            continue
        results.extend(r)
    print_results(results)


def run_test(info, challenge):
    results = list()
    base_dir = str(info['rode0day_id'])
    vw = VerifyWorker(challenge, base_dir, prefix=info['prefix'])
    r = vw.run_binary()
    if r is None:
        return r

    solutions_dir = os.path.join(base_dir, 'solutions', str(challenge['challenge_id']))
    if not os.path.isdir(solutions_dir):
        solutions_dir = os.path.join(base_dir, 'solutions', str(challenge['install_dir']))
    if not os.path.isdir(solutions_dir):
        return [r]
    for solution in os.listdir(solutions_dir):
        sol_file = os.path.join(solutions_dir, solution)
        results.append(vw.run_binary(sol_file))
    return results


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
    run_tests(info, args.challenge)


if __name__ == "__main__":
    main()
    sys.exit(0)
