#!/bin/bash


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
    wget -qO- https://rode0day.mit.edu/static/corpora/19.10_vGBLGzVUHlUFNd5Ji2UcvtGHFlleGsrR.tar.gz | tar -c 13 -xzf -
}

make_clean() {
    make -C ${1}/${2}/src clean || exit
}

make_lava() {
    CC=gcc CFLAGS="-m32 -DLAVA_LOGGING" make -C ${1}/${2}/src || exit
    make -C ${1}/${2}/src install
    cp -r ${1}/${2}/src/lava-install ${1}/${2}/lava
}

make_lava_afl_gcc() {
    make -C ${1}/${2}/src clean
    CC=afl-gcc CFLAGS="-m32 -DLAVA_LOGGING" make -C ${1}/${2}/src || exit
    make -C ${1}/${2}/src install
    cp -r ${1}/${2}/src/lava-install ${1}/${2}/lava-afl-gcc
    sed 's/lava-install/lava-gcc/' ${1}/${2}/job.json > ${1}/${2}/job_afl-gcc.json
}

make_lava_afl_clang() {
    make -C ${1}/${2}/src clean
    CC=afl-clang-fast CFLAGS="-m32 -DLAVA_LOGGING" make -C ${1}/${2}/src || exit
    make -C ${1}/${2}/src install
    cp -r ${1}/${2}/src/lava-install ${1}/${2}/lava-afl-clang
    sed 's/lava-install/lava-clang/' ${1}/${2}/job.json > ${1}/${2}/job_afl-clang.json
}

make_gcov() {
    make -C ${1}/${2}/src clean
    rm -rf ${1}/${2}/gcov
    cp -r ${1}/${2}/src ${1}/${2}/gcov
    CC=gcc CFLAGS="-m32 -fprofile-arcs -ftest-coverage -fPIC -O0" make -C ${1}/${2}/gcov || exit
}

# 19.02
build_1902() {
    for tgt in bzipB fileB3 jqS2 yamlB3 yamlS3
    do
        make_lava_afl_gcc 19.02 $tgt
    done
}

#19.01
build_1901() {
    for tgt in filemagicB filemagicS jqB jqS pcre2B
    do
        make_lava_afl_gcc 19.01 $tgt
    done
}

# 18.11
build_1811() {
    for tgt in duktape fileB2 fileS2 tinyexpr; do
        make_lava_afl_gcc 18.11 $tgt
    done
}

# 18.10
build_1810() {
    for tgt in newgrepS pcreB pcreS; do
        make_lava_afl_gcc 18.10 $tgt
    done
}

# 18.09
build_1809() {
    for tgt in grepb greps jpegb jpegs; do
        make_lava 18.09 $tgt
        make_lava_afl_gcc 18.09 $tgt
        make_gcov 18.09 $tgt
    done
}

build_all() {
  for comp in 3 4 5 6 7 8 9 10 11 12 13; do
      TGTS=$(find $comp/ -mindepth 1 -maxdepth 1 -type d -printf "%f ")
      for tgt in $TGTS; do
          [ -e ${comp}/${tgt}/src/Makefile ] || continue
          make_clean $comp $tgt
          make_lava $comp $tgt
          # make_lava_afl_gcc $comp $tgt
          # make_lava_afl_clang $comp $tgt
          # make_gcov $comp $tgt
      done
  done

}

# build_1809
# build_1810
# build_1811
# build_1901
# build_1902
# build_1903
build_all
# download_challenges
