#!/bin/bash

export CC=${CC:-gcc}
export CFLAGS=${CFLAGS:--g -w}

declare -A CC_ABV
CC_ABV[afl-clang-fast]="afl-cf"
CC_ABV[hfuzz-clang]="hf"
CC_ABV[angora-clang]="ang"

LAVA_M="lava_corpus/LAVA-M"
BN=${CC##*/}

[ -d 0 ] && cd 0

if [ ! -e lava_corpus.patch ]; then
    echo "[-] Error: could not find patch file 'lava_corpus.patch'."
    exit 1
fi

echo "[*] Downloading lava_corpus.tar.xz"
wget -qO- http://panda.moyix.net/~moyix/lava_corpus.tar.xz | tar -xJf -

if [ ! -d lava_corpus ]; then
    echo "[-] Error: failed to download lava_corpus!"
    exit 1
fi

echo "[*] Applying patch file"
# git -C lava_corpus apply ../lava_corpus.patch
patch -d lava_corpus -p1 -i ../lava_corpus.patch


build_lava_angora_track() {
    pushd ${LAVA_M}/${target} >/dev/null
    make clean
    USE_TRACK=1 CC=/angora/bin/angora-clang CFLAGS="$CFLAGS" make -j || exit 1
    popd >/dev/null
    cp ${LAVA_M}/${target}/coreutils-8.24-lava-safe/lava-install/bin/${target} \
        ${target}/lava-${CC_ABV[$BN]:-$BN}/bin/${target}.tt
}


build_lava() {
    local target=${1:-base64}
    pushd ${LAVA_M}/${target} >/dev/null
    ./validate.sh
    popd >/dev/null

    mkdir -p ${target}/lava-${CC_ABV[$BN]:-$BN}/bin
    mkdir -p ${target}/inputs

    cp ${LAVA_M}/${target}/coreutils-8.24-lava-safe/lava-install/bin/${target} \
              ${target}/lava-${CC_ABV[$BN]:-$BN}/bin/
    cp ${LAVA_M}/${target}/fuzzer_input/* ${target}/inputs/

    if [ -e /angora/bin/angora-clang ]; then
        build_lava_angora_track
    fi
}


for target in base64 md5sum uniq who; do
    build_lava $target
done

rm -rf lava_corpus
