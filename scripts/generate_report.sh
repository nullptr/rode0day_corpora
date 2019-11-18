#!/bin/bash

mkdir public
cp scripts/templates/index.html public/
cp scripts/templates/header.html public/solutions.html
cat results*.html >> public/solutions.html
cat scripts/templates/footer.html >> public/solutions.html



