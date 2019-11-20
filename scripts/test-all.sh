#!/bin/bash

fuzzer=${1:-qsym}

docker pull registry.gitlab.com/rode0day/fuzzer-testing/${fuzzer}_runner:16.04 || exit 1

logfile="testing-${fuzzer}.log"
rm -f $logfile 

while read target; do
    ./scripts/launch.sh --test --fuzzer ${fuzzer} -N 2 $target | tee -a $logfile
done <<< "grepb
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
fileS5
jpegS5
pcreB4
sqliteB4"

grep 'Finished' $logfile
