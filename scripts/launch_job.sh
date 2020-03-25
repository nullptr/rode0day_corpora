#!/bin/bash

usage() {
   echo "Usage: $0 <fuzzer> <target_name> <n cpus> [--dict] [--test] [--limit <# seconds>]"
   exit 1
}

bail() {
    echo "[-] aborting: $1"
    exit 1
}

[ $# -lt 2 ] && usage

FZ="${1:-honggfuzz}"
TGT="$2"
NF="${3:-4}"
USE_DICT="$4"
LOGDIR="${LOGDIR:-$HOME}"
RUNC=singularity
T23H="$(( 60 * 60 * 23 + 60 * 30 ))"
TLIM="$(( 60 * 60 * 24 - 120 ))"

declare -A ABV
ABV[afl]=afl
ABV[aflpp]=pp
ABV[aflrb]=rb
ABV[qsym]=qsym
ABV[honggfuzz]=hf
ABV[eclipser]=ec
ABV[angora]=ang
ABV[ankou]=ak

FUZZ=${ABV[$FZ]}
SIMG=${HOME}/s_images/${FZ}.sif
USE_SBATCH=true

while (( "$#" )); do
    case "$1" in
        --limit)
            TLIM="$2"
            T23H="$(( $2 - 60 * 30 ))"
            shift 2
            ;;
        --test)
            T23H="$(( 60 * 10 ))"
            TLIM="$(( 60 * 15 ))"
            USE_DICT="dict"
            NF="2"
            shift
            ;;
        --pull)
            rm -f $SIMG
            singularity pull --force --name $SIMG shub://shub-fuzz/$FZ
            shift
            ;;
        -D|--dict)
            USE_DICT="dict"
            shift
            ;;
        --no-sbatch)
            USE_SBATCH=false
            shift
            ;;
        -h|--help)
            usage
            ;;
        *)
            shift
            ;;
    esac
done

cd $(dirname $0)/../
TGT_ROOT=$(find  -mindepth 2 -maxdepth 2 -type d -name "$TGT" -printf "%p")

[ -d "$TGT_ROOT" ] || bail "failed to find $TGT (found $TGT_ROOT)"

[ -e "$TGT_ROOT/${FZ}_job.json" ] || bail "failed to find job config in $TGT_ROOT for $FZ"

[ -e "$SIMG" ] || bail "failed to find singularity image: $SIMG"

# Default args, partition=normal. On LL we need manycore and constraints
partition="--partition=normal"
if [ -e /home/gridsan/AN24929 ]; then
    partition="--partition=manycore --constraint=xeon64c"
elif [ -e /scratch ]; then
    partition="--partition=short"
fi

echo "[*] Using target: $TGT, fuzzer: $FZ ($FUZZ), n CPUs: $NF on partition: $partition"

if $USE_SBATCH; then
#      --partition="normal" \
#      --partition="express" \
#      --time=1:00:00 \
#      --partition="short" \
#      --time=1-00:00:00 \
set -ux
sbatch --job-name="${FUZZ}.${TGT}.run"  \
       --output="${LOGDIR}/${FUZZ}.${TGT}.%j.log" \
       --export=TGT=$TGT,FZ=$FZ,NF=$NF,USE_DICT=$USE_DICT,T23H=$T23H,TLIM=$TLIM,ALL \
       $partition \
       --time=1-00:00:00 \
       --nodes=1 \
       --tasks-per-node=1 \
       --cpus-per-task="$(( $NF + 2 ))" \
       --cpu-freq=Performance \
       $(dirname $0)/fuzz.sh
else
    source $(dirname $0)/fuzz.sh
fi
