#!/bin/bash

if [ $# != 1 ]; then
	echo "No file name given"
fi

FN="$1.cpp"
OF="$1.out"

clear

echo "Compiling '$FN' into '$OF'."

g++ $FN -o $OF

echo "Compilation complete"

