#!/bin/bash

bail() {
  echo "[-] aboring on line: $1: $2"
  exit 1
}

[ -n "$FZ" ] || bail $LINENO "FZ not defined"
[ -n "$TGT" ] || bail $LINENO "TGT not defined"
[ -n "$NF" ] || bail $LINENO "num fuzzers (NF) not defined"
TGT_ROOT=$(find ${HOME}/Source/corpora -mindepth 2 -maxdepth 2 -type d -name "$TGT" -printf "%p")
[ -d $TGT_ROOT ] || bail $LINENO "failed to find TGT_ROOT"

#
if [ $(which docker 2>/dev/null) ]; then
    RUNC=${RUNC:-docker}
elif [ $(which singularity 2>/dev/null) ]; then
    RUNC=singularity
    SIMG=${HOME}/s_images/${FZ}.sif
    AFL=${HOME}/s_images/aflpp.sif
else
    bail $LILNENO "Failed to find container engine."
fi

FBASE=/dev/shm/fuzz
FDIR=/dev/shm/fuzz/${FZ}/${TGT}

echo "[*] Using target: $TGT_ROOT, fuzzing with $FZ for $T24H seconds"
rm -rf $FDIR || echo "failed to remove $FDIR"
mkdir -p $FDIR || bail $LINENO "failed to create FDIR"
rsync -a  $TGT_ROOT/ $FDIR/
mkdir -p $FDIR/outputs

while [ ! -e $FDIR/${FZ}_job.json ]; do sleep 30s; done

date
grep "model name" /proc/cpuinfo | head -n 1
SECONDS=0

JOB_ID=${SLURM_JOB_ID:-$(date +%m%d%_H)}
sed -i "s/XXXX/${JOB_ID}/; s/YYYY/${FZ}/; s/N=4/N=${NF}/" $FDIR/${FZ}_job.json

if [ "$USE_DICT" = "dict" ]; then
    sed -i 's/_dict/dict/' $FDIR/${FZ}_job.json
fi

if [ -e ${HOME}/Source/NU_${FZ}.luckyfuzz ]; then
    cp ${HOME}/Source/NU_${FZ}.luckyfuzz $FDIR/.luckyfuzz
    ls -la $FDIR/.luckyfuzz
fi

# Docker command line options
if [ "$RUNC" = "singularity" ]; then
    mkdir "${TDIR}"
    AFL_NO_AFFINITY=1 \
    singularity run -B "${TDIR}":/tmp $SIMG /start_fuzzing -n $NF -t $FDIR &
    FPID=$!
else
    CNAME="${FZ}_${TGT}_$(date +%s)"
    echo "[*] starting docker container $CNAME"
    docker run -d --rm --name $CNAME -v $FDIR:$FDIR -w $FDIR --cap-add=SYS_PTRACE \
        -e "QEMU_RESERVED_VA=0xf700000" --hostname "$(hostname)-docker-${TGT}" \
        --pid=host $DIMG -n $NF -t $FDIR
fi

handle_term(){
    echo "[*] Caught SIGTERM signal, shutting down!"
    [ "$RUNC" = "singularity" ] &&  kill -TERM $FPID
    [ "$RUNC" = "docker" ] && docker stop -t 30 $CNAME
    exit 0
}

trap handle_term SIGTERM SIGINT SIGHUP

sleep $(($T23H - $SECONDS))

get_coverage() {
    echo "[*] Getting coverage.  Elapsed = $SECONDS  $(date)"
    cd $FDIR
    if [ "$RUNC" = "singularity" ]; then
        singularity exec $AFL make-gcov-src.sh
        singularity exec $AFL afl-stats -c job.json -s -g
    else
        docker exec $CNAME make-gcov-src.sh
        docker exec $CNAME afl-stats -c ${FZ}_job.json -s -g
    fi
}

[ -d ${FDIR}/src ] && get_coverage

echo "[*] Coverage finished, syncing results  Elapsed = $SECONDS  $(date)"
while [ "$SECONDS" -lt "$T24H" ]
do
    sleep 5m
done

N_QUEUE=$(ls ${FDIR}/outputs/*/queue/* | wc -l)
N_CRASHES=$(ls ${FDIR}/outputs/*/crashes/* | wc -l)
printf "[*] Finished fuzzing %-14s: Elapsed=${SECONDS}s  $(date +'%F %T') Queue=$N_QUEUE Crashes=$N_CRASHES" $TGT

if [ "$RUNC" = "singularity" ]; then
    rm -rf $FDIR
    kill -TERM $FPID
fi
[ "$RUNC" = "docker" ] && docker stop -t 30 $CNAME
