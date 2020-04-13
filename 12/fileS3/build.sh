#!/bin/bash

set -e
set -x

rm -rf rebuilt
cd ./src/

make clean
make CFLAGS+="-w" CFLAGS+="-m32" CC=clang CXX=clang++
make install

# Move our output into ../rebuilt
mv ./lava-install ../rebuilt/
cd ..
echo "Challenge built into rebuilt/"
