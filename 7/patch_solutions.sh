#!/bin/bash

if [ ! -x `which bspatch` ]; then
    echo "ERROR: bspatch (bsdiff) not found"
    exit
fi

for f in solutions/fileB3/*.diff; do
    bspatch solutions/pdf.pdf ${f%.*} $f
done

rm -f solutions/fileB3/*.diff
