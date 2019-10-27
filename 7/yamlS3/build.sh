#!/bin/bash

set -x
set -e

rm -rf rebuilt
cd ./src/

# Configure
make clean | true

# Build
make 
make install

mkdir ../rebuilt
cp -r lava-install/bin ../rebuilt

cd ..
echo "Binaries built in ./rebuilt"
