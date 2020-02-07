#!/bin/bash

bail() {
  echo "[-] aboring: $1"
  exit 1
}

[ -n "$FZ" ] || bail "FZ not defined"
[ -n "$TGT" ] || bail "TGT not defined"
[ -n "$NF" ] || bail "num fuzzers (NF) not defined"
export TGT FZ

TGT_ROOT=$(find -mindepth 2 -maxdepth 2 -type d -name "$TGT" -printf "%p")
[ -d "$TGT_ROOT" ] || bail "failed to find TGT_ROOT"

# confirm container service, default to docker
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

rm -Rf $FDIR || bail "failed to remove $FDIR"
mkdir -p $FDIR || bail "failed to create $FDIR"
rsync -a  $TGT_ROOT/ $FDIR/
mkdir -p $FDIR/outputs

while [ ! -e $FDIR/${FZ}_job.json ]; do sleep 30s; done

echo "[*] Using target: $TGT_ROOT, fuzzing with $FZ for $T24H seconds"
date
grep "model name" /proc/cpuinfo | head -n 1

JOB_ID=${SLURM_JOB_ID:-$(date +%H%M%S)}
sed -i "s/XXXX/${JOB_ID}/; s/YYYY/${FZ}/; s/N=4/N=${NF}/" $FDIR/${FZ}_job.json

if [ "$USE_DICT" = "dict" ]; then
    sed -i 's/_dict/dict/' $FDIR/${FZ}_job.json
fi

if [ -e ${HOME}/Source/NU_${FZ}.luckyfuzz ]; then
    cp -f ${HOME}/Source/NU_${FZ}.luckyfuzz $FDIR/.luckyfuzz
    ls -la $FDIR/.luckyfuzz
fi

SECONDS=0
CNAME="${FZ}_${TGT}_$(date +%s)"
if [ "$RUNC" = "singularity" ]; then
    TDIR="/tmp/$JOB_ID"
    mkdir -p "${TDIR}"
    AFL_NO_AFFINITY=1 \
    # singularity instance start -B "${TDIR}":/tmp $SIMG $CNAME -n $NF -t $FDIR -M $CNAME
    singularity run -B "${TDIR}":/tmp $SIMG -n $NF -t $FDIR -M $CNAME &
    echo "New singularity process $!"
else
    echo "[*] starting docker container $CNAME"
    docker run -d --rm --name $CNAME -v $FDIR:$FDIR -w $FDIR \
        --cap-add=SYS_PTRACE --security-opt seccomp=unconfined -e "TGT=${TGT}" \
        -e "QEMU_RESERVED_VA=0xf700000" --hostname "$(hostname)-docker-${TGT}" \
        --pid=host --ulimit "core=0" $DIMG -n $NF -t $FDIR -M $CNAME
fi

get_coverage() {
    echo "[*] Getting coverage.  Elapsed = $SECONDS  $(date)"
    cd $FDIR
    if [ "$RUNC" = "singularity" ]; then
        singularity exec $SIMG make-gcov-src.sh
        # singularity exec instance://${CNAME} afl-stats -c ${FZ}_job.json -s -g --afl-drcov -j 4
        singularity exec -B "${TDIR}":/tmp $SIMG afl-stats -c ${FZ}_job.json -s -g --afl-drcov -j 4
    else
        docker exec $CNAME make-gcov-src.sh
        docker exec $CNAME afl-stats -c ${FZ}_job.json -s -g --afl-drcov -j 4
    fi
    echo "[*] Coverage finished.  Elapsed = $SECONDS  $(date)"
}

stop_signularity() {
    singularity exec -B "${TDIR}":/tmp $SIMG /start_fuzzing --stop $TGT
    sleep 5s
    singularity instance stop -s TERM $CNAME
}

stop_docker() {
    docker exec $CNAME /start_fuzzing --stop $TGT
    sleep 5s
    docker stop -t 30 $CNAME
}

handle_term(){
    echo "[*] Caught SIGTERM signal, shutting down!"
    [ "$RUNC" = "singularity" ] &&  stop_singularity
    [ "$RUNC" = "docker" ] && stop_docker
    exit 0
}

cd $FDIR
trap handle_term SIGTERM SIGINT SIGHUP

[ -e $HOME/.local/bin/rsync_results.sh ] && source $HOME/.local/bin/rsync_results.sh

sleep $(( $T23H - $SECONDS ))

sleep $(( $T24H - $SECONDS ))

N_QUEUE=$(ls ${FDIR}/outputs/*/queue/* | wc -l)
N_CRASHES=$(ls ${FDIR}/outputs/*/crashes/* | wc -l)
MESSAGE="Queue=$N_QUEUE Crashes=$N_CRASHES"

if [ "$FZ" = "angora" ]; then
    A_QUEUE=$(ls ${FDIR}/outputs/angora/queue/* | wc -l)
    MESSAGE="$MESSAGE Ang-Q=$A_QUEUE"
fi

if [ "$FZ" = "qsym" ]; then
    Q_QUEUE=$(ls ${FDIR}/outputs/*Q*/queue/* | wc -l)
    MESSAGE="$MESSAGE Qsym-Q=$Q_QUEUE"
fi

printf "[*] Finished fuzzing %-14s: Elapsed=${SECONDS}s  $(date +'%F %T') $MESSAGE\n" $TGT

if [ "$RUNC" = "singularity" ]; then
    singularity exec -B "${TDIR}":/tmp $SIMG /start_fuzzing --stop $TGT
    sleep 15s
    exit 0
fi

if [ "$RUNC" = "docker" ]; then
    docker exec $CNAME /start_fuzzing --stop $TGT
    sleep 15s
    docker wait $CNAME
    echo docker stop -t 30 $CNAME
fi
