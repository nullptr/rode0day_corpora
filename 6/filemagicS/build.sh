#!/bin/bash

set -e
set -x

rm -rf rebuilt
cd ./src/

make clean
make
make install

# Move our output into ../rebuilt
mv ./lava-install ../rebuilt/
cd ..
echo "Challenge built into rebuilt/"
