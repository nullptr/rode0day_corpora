#!/bin/bash

date
grep "model name" /proc/cpuinfo | head -n 1
SECONDS=0

FZ=afl
REGISTRY="registry.gitlab.com/rode0day/fuzzer-testing"
TGT="$1"
NF="2"
DIMG="${REGISTRY}/afl_runner:16.04"
T23H="$(( 60 * 60 * 23 ))"
T24H="$(( 60 * 60 * 23 + 60 * 54 ))"


usage() {
    echo "Usage: $0 [--fuzzer <fuzzer_name> [--pull] ] [-N <# instances>] [--limit <# seconds>] [--test] <target_name>"
    exit 1
}

select_fuzzer() {
    case "$1" in
        aflpp)
            DIMG="${REGISTRY}/aflpp_runner:16.04"
        ;;
        qsym)
            DIMG="${REGISTRY}/qsym_runner:16.04"
        ;;
        honggfuzz)
            DIMG="${REGISTRY}/honggfuzz_runner:16.04"
        ;;
        eclipser)
            DIMG="${REGISTRY}/eclipser_runner:16.04"
        ;;
        angora)
            DIMG="${REGISTRY}angora_runner:16.04"
        ;;
        *)
            DIMG="${REGISTRY}/afl_runner:16.04"
        ;;
    esac
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
            shift
            ;;
        --pull)
            docker pull $DIMG
            shift
            ;;
        -N)
            NFH="$2"
            shift 2
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


FBASE=/dev/shm/fuzz
FDIR=/dev/shm/fuzz/${FZ}/${TGT}
SIMG=${HOME}/s_images/${FZ}.sif
AFL=${HOME}/s_images/aflpp.sif

TGT_ROOT=$(find -mindepth 2 -maxdepth 2 -type d -name "$TGT" -printf "%P")
if [ ! -d "$TGT_ROOT" ]; then
    echo "[-] failed to find $TGT (found $TGT_ROOT)"
    exit 1
else
    echo "[*] Using target: $TGT_ROOT, fuzzing with $FZ for $T24H seconds"
fi
rm -rf $FDIR/*
mkdir -p $FDIR
rsync -a  $TGT_ROOT/ $FDIR/
mkdir -p $FDIR/outputs

while [ ! -e $FDIR/${FZ}_job.json ]; do sleep 30s; done

JOB_ID=${SLURM_JOB_ID:-$(date +%m%d%_H)}
sed -i "s/XXXX/${JOB_ID}/; s/YYYY/${FZ}/; s/N=4/N=${NF}/" $FDIR/${FZ}_job.json
sed -i 's/_dict/dict/' $FDIR/${FZ}_job.json

if [ -e ${HOME}/Source/NU_AFL.luckyfuzz ]; then
    cp ${HOME}/Source/NU_AFL.luckyfuzz $FDIR/.luckyfuzz
    ls -la $FDIR/
fi

# Docker command line options
# singularity exec -B "/tmp/${SLURM_JOB_ID}":/tmp $SIMG /start_fuzzing -n 8 -t $FDIR &
CNAME="${FZ}_${TGT}_$(date +%s)"
set -x
docker run -d --rm --name $CNAME -v $FDIR:$FDIR -w $FDIR --cap-add=SYS_PTRACE -e "QEMU_RESERVED_VA=0xf700000" --pid=host $DIMG -n $NF -t $FDIR
set +x

sleep $(($T23H - $SECONDS))

get_coverage() {
    echo "[*] Getting coverage.  Elapsed = $SECONDS  $(date)"
    cd $FDIR
    docker exec $CNAME make-gcov-src.sh
    docker exec $CNAME afl-stats -c ${FZ}_job.json -s -g
    # singularity exec $AFL make-gcov-src.sh
    # singularity exec $AFL afl-stats -c ${FZ}_job.json -s -g
}

[ -d ${FDIR}/src ] && get_coverage

echo "[*] Coverage finished, syncing results  Elapsed = $SECONDS  $(date)"
while [ "$SECONDS" -lt "$T24H" ]
do
    sleep 5m
done
N_QUEUE=$(ls outputs/*/queue/* | wc -l)
N_CRASHES=$(ls outputs/*/crashes/* | wc -l)
echo "[*] Fuzzing finished:  Elapsed = $SECONDS  $(date) Queue=$N_QUEUE Crashes=$N_CRASHES"
docker stop -t 30 $CNAME
