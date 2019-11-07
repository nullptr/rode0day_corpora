#!/bin/bash

if  [ ! -x `which bspatch` ]; then
    echo "ERROR: bspatch not found"
    exit
fi

for f in solutions/filemagicS2/*; do
    bspatch filemagicS2/src/magic.mgc ${f%.*}.mgc $f
done

rm -f solutions/filemagicS2/*.diff
