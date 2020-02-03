#!/bin/bash

# Analyze all:
# aaa
# Seek to imported function:
# s sym.imp.__ctype_b_loc
# Show cross references to:
# axt
# Verify correct function; patch

r2 -wc 'aaa; s fcn.000c3bba; "wa xor eax, eax; ret"' bin/sqlite
