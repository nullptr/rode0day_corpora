#!/bin/bash

set -e
set -x

rm -rf rebuilt
cd ./src/

# Set up autoconf
make clean | true
aclocal --force
libtoolize
automake --add-missing
autoconf

# Actually configure and build. Watch out for the rpath if you rebuild multiple versions
./configure --prefix=`pwd`/built #--disable-rpath
make clean

make -C src CFLAGS+="-w" CFLAGS+="-m32" -j 16
make -C src install

# Install the magic.mgc file
mkdir -p built/share/misc/
cp magic.mgc built/share/misc/

# Move our output into ../rebuilt
mv ./built ../rebuilt
cd ..
echo "Challenge built into rebuilt/"
