#!/bin/bash

set -x
set -e

rm -rf rebuilt
cd ./src/

# Configure
make clean | true
./configure --prefix=`pwd`/../rebuilt

# Build
make CFLAGS+="-m32" test
make install

# Manually install example-deconstructor test
mkdir ../rebuilt/bin
cp tests/.libs/example-deconstructor ../rebuilt/bin/deconstruct

cd ..
echo "Binaries built in ./rebuilt"
