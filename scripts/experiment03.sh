#!/bin/bash

# experiment 03 - 64-bit binaries
# gcc-64 or afl-clang-fast-64 binaries

[ -e scripts/build.sh ] || exit 1

if [[ $# -eq 0 ]]; then
    ./scripts/build.sh --download
    ./scripts/build.sh --copy-files
    ./10/new_seeds_tcpdump.sh

    ./scripts/build.sh --prebuilt gcc-64
    ./scripts/build.sh --prebuilt afl-gcc
    ./scripts/build.sh --prebuilt afl-clang-fast-64
    ./scripts/build.sh --prebuilt hfuzz-clang
    ./scripts/build.sh --prebuilt angora-clang

    # jq[*] patches to remove command-line args
    echo "[*] patching jq job files..."
    git apply --check patches/jq_no_cmdline.patch && \
        git apply patches/jq_no_cmdline.patch
fi

create_job_files() {
    if [ -e db_config.json ]; then
        local MERGE="--merge db_config.json"
    fi

    ./scripts/create-configs.py -e 3/jpegb/job.json -c job.json -p lava-gcc -y 0/info.yaml -F -M 0 $MERGE >/dev/null

    for i in 0 {2..15}; do
        ./scripts/create-configs.py -e 3/jpegb/qsym_job.json -c qsym_job.json -p lava-gcc -Q -j QSYM -y ${i}/info.yaml -F -M 0 $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/honggfuzz_job.json -c honggfuzz_job.json -p lava-gcc -Q -j HF -y ${i}/info.yaml -F $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/eclipser_job.json -c eclipser_job.json -p lava-gcc -Q -j EC -y ${i}/info.yaml -F $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/angora_job.json -c angora_job.json -p lava-ang -j Ang -y ${i}/info.yaml -F -M 0 $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/afl_job.json -c afl_job.json -p lava-gcc -Q -j AFL -y ${i}/info.yaml -F -M 0 $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/aflpp_job.json -c aflpp_job.json -p lava-afl-cf -j AFL++ -y ${i}/info.yaml -F -M 0 $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/aflrb_job.json -c aflrb_job.json -p lava-afl-cf -j AFLrb -y ${i}/info.yaml -F -M 0 $MERGE >/dev/null
        ./scripts/create-configs.py -e 3/jpegb/ankou_job.json -c ankou_job.json -p lava-afl-cf -j AK -y ${i}/info.yaml -F -M 0 $MERGE >/dev/null
    done
    echo "[*] all job config files created!"
}

create_job_files

# lava-gcc needs 64-bit afl-qemu-trace (/usr/local/bin/afl-*)
sed -i 's/usr\/local\/i386/usr\/local\/bin/' */*/qsym_job.json
sed -i 's/usr\/local\/i386/usr\/local\/bin/' */*/afl_job.json
