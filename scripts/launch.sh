#!/bin/bash


FZ=afl
REGISTRY="registry.gitlab.com/rode0day/fuzzer-testing"
TGT="$1"
NF="2"
DIMG="${REGISTRY}/afl_runner:16.04"
T23H="$(( 60 * 60 * 23 + 60 * 30 ))"
T24H="$(( 60 * 60 * 24 ))"


usage() {
    echo "Usage: $0 [--fuzzer <fuzzer_name> [--pull] ] [-N <# instances>] [-D|--dict] [--limit <# seconds>] [--test] <target_name>"
    exit 1
}

check_docker_image() {
    docker image inspect "$1" >/dev/null || exit 1
}

while (( "$#" )); do
    case "$1" in
        --fuzzer)
            FZ=$2
            DIMG="${REGISTRY}/${FZ}_runner:16.04"
            shift 2
            ;;
        --limit)
            T24H="$2"
            T23H="$(( $2 - 60 * 30 ))"
            shift 2
            ;;
        --test)
            T23H="$(( 60 * 10 ))"
            T24H="$(( 60 * 15 ))"
            USE_DICT="dict"
            shift
            ;;
        --pull)
            docker pull $DIMG | tail -n2
            shift
            ;;
        -N)
            NF="$2"
            shift 2
            ;;
        -D|--dict)
            USE_DICT="dict"
            shift
            ;;
        -h|--help)
            usage
            ;;
        *)
            TGT="$1"
            shift
            ;;
    esac
done

check_docker_image $DIMG

cd $(dirname $0)/../
source $(dirname $0)/fuzz.sh
