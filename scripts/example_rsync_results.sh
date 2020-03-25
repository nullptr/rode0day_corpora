#!/bin/bash

ARCHIVE=$HOME/archive

save_results() {
    set -u
    local SRC="$FDIR"
    local DST="$ARCHIVE/${FZ}/${TGT}_${SLURM_JOB_ID}"
    # sleep for first hour
    sleep $(( 60 * 60 ))
    [ -e $DST ] || mkdir -p $DST
    while true; do
        rsync -qa $SRC/ $DST/
        sleep 31m
    done
}

save_final_results() {
    # kill any remaining background jobs
    set -u
    jobs -p | xargs kill
    set -u
    local SRC="$FDIR"
    local DST="$ARCHIVE/${FZ}/${TGT}_${SLURM_JOB_ID}"
    [ -e $DST ] || mkdir -p $DST
    rsync -qa $SRC/ $DST/

}

save_results &
