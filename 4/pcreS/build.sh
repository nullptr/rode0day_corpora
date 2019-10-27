#!/bin/bash

cd src
make clean
make CFLAGS+=-m32

rm -rf ../rebuilt
make install
mv ./lava-install ../rebuilt

cd ..
