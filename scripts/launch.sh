#!/bin/bash


FZ=afl
REGISTRY="registry.gitlab.com/rode0day/fuzzer-testing"
TGT="$1"
NF="2"
DIMG="${REGISTRY}/afl_runner:16.04"
T23H="$(( 60 * 60 * 23 ))"
T24H="$(( 60 * 60 * 23 + 60 * 54 ))"


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
            USE_DICT=1
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
            USE_DICT=1
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

FBASE=/dev/shm/fuzz
FDIR=/dev/shm/fuzz/${FZ}/${TGT}
SIMG=${HOME}/s_images/${FZ}.sif
AFL=${HOME}/s_images/aflpp.sif

date
grep "model name" /proc/cpuinfo | head -n 1
SECONDS=0

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

if [ "$USE_DICT" = "1" ]; then
    sed -i 's/_dict/dict/' $FDIR/${FZ}_job.json
fi

if [ -e ${HOME}/Source/NU_${FZ}.luckyfuzz ]; then
    cp ${HOME}/Source/NU_${FZ}.luckyfuzz $FDIR/.luckyfuzz
    ls -la $FDIR/.luckyfuzz
fi

# Docker command line options
# singularity exec -B "/tmp/${SLURM_JOB_ID}":/tmp $SIMG /start_fuzzing -n 8 -t $FDIR &
CNAME="${FZ}_${TGT}_$(date +%s)"
echo "[*] starting docker container $CNAME"
docker run -d --rm --name $CNAME -v $FDIR:$FDIR -w $FDIR --cap-add=SYS_PTRACE \
    -e "QEMU_RESERVED_VA=0xf700000" --hostname "$(hostname)-docker-${TGT}" \
    --pid=host $DIMG -n $NF -t $FDIR

handle_term(){
    echo "[*] Caught SIGTERM signal, shutting down!"
    docker stop -t 30 $CNAME
    exit 0
}

trap handle_term SIGTERM SIGINT SIGHUP

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
N_QUEUE=$(ls ${FDIR}/outputs/*/queue/* | wc -l)
N_CRASHES=$(ls ${FDIR}/outputs/*/crashes/* | wc -l)
echo -e "[*] Finished fuzzing $TGT: \t Elapsed=${SECONDS}s  $(date +'%F %T') Queue=$N_QUEUE Crashes=$N_CRASHES"
docker stop -t 30 $CNAME
