#!/bin/bash

if [ ! -x `which bspatch` ]; then
    echo "ERROR: bspatch (bsdiff) not found"
    exit
fi

for f in solutions/audiofile*/*.diff; do
    bspatch solutions/seed.wav ${f%.*} $f
done

rm -f solutions/audiofileB/*.diff
rm -f solutions/audiofileS/*.diff
