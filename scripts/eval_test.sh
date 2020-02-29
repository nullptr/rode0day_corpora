#!/bin/bash

fuzzer=${1:-qsym}
RUNC=${2:-docker}

[ $(which $RUNC) ] || exit 1

if [ "$RUNC" = "singularity" ]; then
    simg=${HOME}/s_images/${fuzzer}.sif
    rm -f $simg
    singularity pull --force --name $simg shub://shub-fuzz/${fuzzer}
    no_sbatch="--no-sbatch"
    logfile="testing-singularity-${fuzzer}.log"
else
    docker pull registry.gitlab.com/rode0day/fuzzer-testing/${fuzzer}_runner:16.04 || exit 1
    logfile="testing-docker-${fuzzer}.log"
fi
rm -f $logfile

read -r -d '' TARGETS << EOM
duktape
fileB3
fileS3
fileS4
grepB2
jpegS3
jqB
jqB2
jqS3
jqS4
newgrepS
pcreB
sqliteB
tcpdumpB
tinyexprB2
yamlB2
EOM

SECONDS=0
if [ "$RUNC" = "singularity" ]; then
    if [[ "$no_sbatch" ]]; then
        echo "$targets" | xargs -i{} -p 7 sh -c "nohup ./scripts/launch_job.sh ${fuzzer} '{}' 2 --test ${no_sbatch} > testing-singularity-${fuzzer}-{}.log"
    else
        echo "$targets" | xargs -i{} -p 2 sh -c "./scripts/launch_job.sh ${fuzzer} '{}' 2 --test "
    fi
else
    echo "$TARGETS" | xargs -I{} -P 7 sh -c "nohup ./scripts/launch.sh --test --fuzzer ${fuzzer} -N 2 '{}' > testing-docker-${fuzzer}-{}.log"
fi

logfile="testing-${RUNC}-${fuzzer}.log"
grep -h 'Finished' *-${RUNC}-${fuzzer}-*.log > $logfile
echo "[*] Finished in $SECONDS secs on $(date)" | tee -a $logfile
