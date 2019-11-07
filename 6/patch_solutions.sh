#!/bin/bash

if  [ ! -x `which bspatch` ]; then
    echo "ERROR: bspatch not found"
    exit
fi

for f in solutions/filemagicS/*; do
    bspatch filemagicS/src/magic.mgc ${f%.*}.mgc $f
done

for f in solutions/filemagicB/*; do
    bspatch filemagicB/src/magic.mgc ${f%.*}.mgc $f
done

rm -f solutions/filemagicB/*.diff
rm -f solutions/filemagicS/*.diff
