#!/bin/bash

fuzzer=${1:-qsym}
RUNC=${2:-docker}

[ $(which $RUNC) ] || exit 1

if [ "$RUNC" = "singularity" ]; then
    simg=${HOME}/s_images/${fuzzer}.sif
    rm -f $simg
    singularity pull --force --name $simg shub://shub-fuzz/${fuzzer}
    logfile="testing-singularity-${fuzzer}.log"
else
    docker pull registry.gitlab.com/rode0day/fuzzer-testing/${fuzzer}_runner:16.04 || exit 1
    logfile="testing-docker-${fuzzer}.log"
fi
rm -f $logfile

read -r -d '' TARGETS << EOM
grepb
greps
jpegb
jpegs
newgrepS
pcreB
pcreS
duktape
fileB2
fileS2
tinyexpr
filemagicB
filemagicS
jqB
jqS
pcre2B
bzipB
fileB3
jqS2
yamlB3
yamlS3
bzipS
filemagicS2
jqB2
pcreS2
yamlB4
fileB4
jpegB2
jpegS2
sqliteB
audiofileB
audiofileS
tcpdumpB
tcpdumpS
fileB5
jpegS3
jqS3
sqliteB2
tinyexprB2
fileS3
grepB2
jqS4
pcreB3
fileS4
jpegS4
jqB3
sqliteB3
jpegS5
pcreB4
EOM

SECONDS=0
if [ "$RUNC" = "singularity" ]; then
    echo "$TARGETS" | xargs -I{} -P 10 sh -c "nohup ./scripts/submit_job.sh ${fuzzer} '{}' 2 --test > testing-singularity-${fuzzer}-{}.log"
else
    echo "$TARGETS" | xargs -I{} -P 10 sh -c "nohup ./scripts/launch.sh --test --fuzzer ${fuzzer} -N 2 '{}' > testing-docker-${fuzzer}-{}.log"
fi

logfile="testing-${RUNC}-${fuzzer}.log"
grep -h 'Finished' *-${RUNC}-${fuzzer}-*.log > $logfile
echo "[*] Finished in $SECONDS secs on $(date)" | tee -a $logfile
