#!/bin/bash

BUILD=${BUILD:-all}
TARGET=""
FUNC=${FUNC:-make_lava}
CC=${CC:-gcc}
CFLAGS=${CFLAGS:--m32 -DLAVA_LOGGING -w}

declare -A CC_ABV

CC_ABV[afl-clang-fast]="afl-cf"
CC_ABV[hfuzz-clang]="hf"
CC_ABV[angora-clang]="ang"


download_challenges() {
    wget -qO- https://rode0day.mit.edu/static/corpora/18.09_uioiary7291jsqeYOe6GLtdCIdtG9rFk.tar.gz | tar -C 3 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/18.10_dRgl8DaTW6CVbmzCRBeS8cWCWzEKKpd5.tar.gz | tar -C 4 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/18.11_RhNVrLtaOetyZrjtmOBlItBWNeUsqlpl.tar.gz | tar -C 5 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.01_NiEBMqGzGf9WOn0XhJXnsKNrNqFshcbh.tar.gz | tar -C 6 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.02_hCzaul3skeIWojkZv8c4rccgyV99Sqo1.tar.gz | tar -C 7 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.03_HD7hb0POwkQEIwKOo9AQcnM0GCq9mKGM.tar.gz | tar -C 8 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.05_IaGjrmYTjtDVCwMmNUuSUbUfcXMFeszE.tar.gz | tar -C 9 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.06_t5QACvuwa7SBJjvT1i5GCf14RtPDfgI3.tar.gz | tar -C 10 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.07_OyGMGe8kLozgWx9je2IbKiG2msIzixl6.tar.gz | tar -C 11 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.09_IIUBq9nEVBRwaPaZnOnZoE9qKmT20Smg.tar.gz | tar -C 12 -xzf -
    wget -qO- https://rode0day.mit.edu/static/corpora/19.10_vGBLGzVUHlUFNd5Ji2UcvtGHFlleGsrR.tar.gz | tar -C 13 -xzf -
}

copy_required_files() {
    cp 5/fileS2/src/magic/magic.mgc 5/fileS2/built/share/misc/
    cp 12/fileS3/src/magic/magic.mgc 12/fileS3/built/share/misc/
    cp 13/fileS4/src/magic/magic.mgc 12/fileS4/built/share/misc/
}

make_clean() {
    make -C ${1}/src clean || exit
}

make_lava() {
    make -C ${1}/src clean
    CFLAGS="$CFLAGS" make -C ${1}/src || exit
    make -C ${1}/src install
    BN=${CC##*/}
    cp -TR ${1}/src/lava-install ${1}/lava-${CC_ABV[$BN]:-$BN}
}

make_lava_afl_clang() {
    make -C ${1}/src clean
    CC=afl-clang-fast make -C ${1}/src || exit
    make -C ${1}/src install
    cp -TR ${1}/src/lava-install ${1}/lava-afl-cf
    sed 's/lava-install/lava-clang/' ${1}/job.json > ${1}/job_afl-clang.json
}

make_lava_angora() {
    make -C ${1}/src clean
    CC=/angora/bin/angora-clang CFLAGS="$CFLAGS" make -C ${1}/src || exit
    make -C ${1}/src install
    cp -TR ${1}/src/lava-install ${1}/lava-ang
    make -C ${1}/src clean
    USE_TRACK=1 CC=/angora/bin/angora-clang CFLAGS="$CFLAGS" make -C ${1}/src || exit
    make -C ${1}/src install
    for f in ${1}/src/lava-install/bin/*; do cp "$f" "${1}/lava-ang/bin/${f##*/}.tt"; done
}

make_gcov() {
    make -C ${1}/src clean
    rm -rf ${1}/gcov
    cp -r ${1}/src ${1}/gcov
    CC=gcc CFLAGS="-m32 -fprofile-arcs -ftest-coverage -fPIC -O0 -w" make -C ${1}/gcov || exit
}

make_ccov() {
    make -C ${1}/src clean
    rm -rf ${1}/ccov
    cp -r ${1}/src ${1}/ccov
    CFLAGS="-m32 -fprofile-instr-generate -fcoverage-mapping -fPIC -O0 -w" make -C ${1}/ccov || exit
}

make_scov() {
    make -C ${1}/src clean
    rm -rf ${1}/scov
    cp -r ${1}/src ${1}/scov
    CFLAGS="-m32 -fsanitize-coverage=trace-pc-guard -fPIC -O0 -w" make -C ${1}/scov || exit
}

build_1906() {
    build_comp 10
}

build_1905() {
    build_comp 9
}

build_1903() {
    build_comp 8
}

build_1902() {
#   for tgt in bzipB fileB3 jqS2 yamlB3 yamlS3; do $FUNC 7 $tgt; done
    build_comp 7
}

build_1901() {
#   for tgt in filemagicB filemagicS jqB jqS pcre2B; do $FUNC 6 $tgt; done
    build_comp 6
}

build_1811() {
#   for tgt in duktape fileB2 fileS2 tinyexpr; do $FUNC 5 $tgt; done
    build_comp 5
}

build_1810() {
#   for tgt in newgrepS pcreB pcreS; do $FUNC 4 $tgt; done
    build_comp 4
}

build_1809() {
#   for tgt in grepb greps jpegb jpegs; do $FUNC 3 $tgt; done
    build_comp 3
}

build_one(){
    tgt=$(find  -mindepth 2 -maxdepth 2 -type d -name "$1" -printf "%P")
    echo "[*] building $tgt"
    if  [ -e ${tgt}/src/Makefile ]; then
        $FUNC $tgt
    else
        echo "[-] source for target ($1) not found, aborting."
        exit 1
    fi
}

build_comp() {
    comp=${1:-3}
    TGTS=$(find $comp/ -mindepth 1 -maxdepth 1 -type d -printf "%f ")
    for tgt in $TGTS; do
        [ -e ${comp}/${tgt}/src/Makefile ] || continue
        $FUNC "${comp}/${tgt}"
    done
}

build_all() {
  for comp in 3 4 5 6 7 8 9 10 11 12 13; do
      build_comp $comp
  done
}

find_clang() {
    if which clang-10 >/dev/null; then CC=clang-10; return; fi
    if which clang-9 >/dev/null; then CC=clang-9; return; fi
    if which clang-8 >/dev/null; then CC=clang-8; return; fi
    if which clang-7 >/dev/null; then CC=clang-7; return; fi
    if which clang-6 >/dev/null; then CC=clang-6; return; fi
    if which clang >/dev/null; then CC=clang; return; fi
}

usage() {
    echo "Usage: $0 [ [-b|--build <all|MMYY>] | [-t|--target <target_name>] ]"
    echo "                          [-L|--no-lavalogs] [-W|--show-warnings] [-X|--no-i386] [--cc <compiler>] "
    echo "                          [--gcov] [--ccov] [--clean] [--download]"
    exit 0
}

while (( "$#" ))
do
    case "$1" in
        -b|--build)
            BUILD="$2"
            shift 2
            ;;
        -t|--target)
            BUILD=one
            TARGET="$2"
            shift 2
            ;;
        -L|--no-lavalogs)
            CFLAGS=${CFLAGS//-DLAVA_LOGGING/}
            shift
            ;;
        -W|--show-warnings)
            CFLAGS=${CFLAGS//-w/}
            shift
            ;;
        -X|--no-i386)
            CFLAGS=${CFLAGS//-m32/}
            shift
            ;;
        --cc)
            CC=$2
            shift 2
            ;;
        --angora)
            FUNC=make_lava_angora
            CC=/angora/bin/angora-clang
            shift
            ;;
        --gcov)
            FUNC=make_gcov
            CC=gcc
            shift
            ;;
        --ccov)
            FUNC=make_ccov
            find_clang
            shift
            ;;
        --clean)
            FUNC=make_clean
            shift
            ;;
        --download)
            download_challenges
            echo "[*] all challenges downloaded!"
            exit 0
            ;;
        --copy-files)
            copy_required_files
            echo "[*] required files copied"
            exit 0
            ;;
        -h|--help)
            usage
            ;;
        --) # end argument parsing
            shift
            break
            ;;
        *)
            echo "[-] unknown parameter: $1"
            usage
            ;;
    esac
done

if [ declare -f build_${BUILD} 2>/dev/null ]; then
    echo "[-] build function build_${BUILD} does not exist."
    exit 1
fi

if  which $CC >/dev/null; then
    build_${BUILD} $TARGET
else
    echo "[-] compiler ($CC) not found."
fi

