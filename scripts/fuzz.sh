#!/bin/bash

bail() {
  echo "[-] aboring: $1"
  exit 1
}

[ -n "$FZ" ] || bail "FZ not defined"
[ -n "$TGT" ] || bail "TGT not defined"
[ -n "$NF" ] || bail "num fuzzers (NF) not defined"

SCRIPT_PATH="$(readlink -f $0)"
BASE_DIR="$(dirname $(dirname $SCRIPT_PATH))"
TGT_ROOT=$(find $BASE_DIR -mindepth 2 -maxdepth 2 -type d -name "$TGT" -printf "%p")
[ -d $TGT_ROOT ] || bail "failed to find TGT_ROOT"

#
if [ $(which docker 2>/dev/null) ]; then
    RUNC=${RUNC:-docker}
elif [ $(which singularity 2>/dev/null) ]; then
    RUNC=singularity
else
    bail $LILNENO "Failed to find container engine."
fi

FBASE=/dev/shm/fuzz
FDIR=/dev/shm/fuzz/${FZ}/${TGT}
SIMG=${HOME}/s_images/${FZ}.sif

echo "[*] Using target: $TGT_ROOT, fuzzing with $FZ for $T24H seconds"
rm -Rf $FDIR || bail "failed to remove $FDIR"
mkdir -p $FDIR || bail "failed to create $FDIR"
rsync -a  $TGT_ROOT/ $FDIR/
mkdir -p $FDIR/outputs

while [ ! -e $FDIR/${FZ}_job.json ]; do sleep 30s; done

date
grep "model name" /proc/cpuinfo | head -n 1
SECONDS=0

JOB_ID=${SLURM_JOB_ID:-$(date +%H%M%S)}
sed -i "s/XXXX/${JOB_ID}/; s/YYYY/${FZ}/; s/N=4/N=${NF}/" $FDIR/${FZ}_job.json

if [ "$USE_DICT" = "dict" ]; then
    sed -i 's/_dict/dict/' $FDIR/${FZ}_job.json
fi

if [ -e ${HOME}/Source/NU_${FZ}.luckyfuzz ]; then
    cp ${HOME}/Source/NU_${FZ}.luckyfuzz $FDIR/.luckyfuzz
    ls -la $FDIR/.luckyfuzz
fi

CNAME="${FZ}_${TGT}_$(date +%s)"
if [ "$RUNC" = "singularity" ]; then
    TDIR="/tmp/$JOB_ID"
    mkdir -p "${TDIR}"
    AFL_NO_AFFINITY=1 \
    singularity instance start -B "${TDIR}":/tmp $SIMG $CNAME -n $NF -t $FDIR
else
    echo "[*] starting docker container $CNAME"
    docker run -d --rm --name $CNAME -v $FDIR:$FDIR -w $FDIR --cap-add=SYS_PTRACE \
        -e "QEMU_RESERVED_VA=0xf700000" --hostname "$(hostname)-docker-${TGT}" \
        --pid=host $DIMG -n $NF -t $FDIR
fi

handle_term(){
    echo "[*] Caught SIGTERM signal, shutting down!"
    [ "$RUNC" = "singularity" ] &&  singularity instance stop -s TERM $CNAME
    [ "$RUNC" = "docker" ] && docker stop -t 30 $CNAME
    exit 0
}

trap handle_term SIGTERM SIGINT SIGHUP

[ -e $HOME/.local/bin/rsync_results.sh ] && source $HOME/.local/bin/rsync_results.sh

sleep $(( $T23H - $SECONDS ))

get_coverage() {
    echo "[*] Getting coverage.  Elapsed = $SECONDS  $(date)"
    cd $FDIR
    if [ "$RUNC" = "singularity" ]; then
        singularity exec instance://${CNAME} make-gcov-src.sh
        singularity exec instance://${CNAME} afl-stats -c ${FZ}_job.json -s -g --afl-drcov -j 4
    else
        docker exec $CNAME make-gcov-src.sh
        docker exec $CNAME afl-stats -c ${FZ}_job.json -s -g --afl-drcov -j 4
    fi
}

[ -d ${FDIR}/src ] && get_coverage

echo "[*] Coverage finished.  Elapsed = $SECONDS  $(date)"
sleep $(( $T24H - $SECONDS ))

N_QUEUE=$(ls ${FDIR}/outputs/*/queue/* | wc -l)
N_CRASHES=$(ls ${FDIR}/outputs/*/crashes/* | wc -l)
# A_QUEUE=$(ls ${FDIR}/outputs/angora/queue/* | wc -l)
# Q_QUEUE=$(ls ${FDIR}/outputs/*Q*/queue/* | wc -l)
printf "[*] Finished fuzzing %-14s: Elapsed=${SECONDS}s  $(date +'%F %T') Queue=$N_QUEUE Crashes=$N_CRASHES\n" $TGT

if [ "$RUNC" = "singularity" ]; then
    singularity instance stop -s TERM -t 30 $CNAME
    rm -Rf $FDIR
    rm -Rf $TDIR
    exit 0
fi
[ "$RUNC" = "docker" ] && docker stop -t 30 $CNAME
