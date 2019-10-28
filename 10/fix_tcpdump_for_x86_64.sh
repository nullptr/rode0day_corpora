#!/bin/bash

patch_src_file()  {
    sed -i -e 's/rorl/rorq/g' "$1"
}

for f in ./tcpdump*/src/src/*pre.c; do
    patch_src_file $f
done
