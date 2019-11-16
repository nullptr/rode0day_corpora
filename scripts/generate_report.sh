#!/bin/bash

mkdir public
cp scripts/templates/index.html public/
cp scripts/templates/header.html public/afl-gcc.html
cat results*.html >> public/afl-gcc.html
cat scripts/templates/footer.html >> public/afl-gcc.html



