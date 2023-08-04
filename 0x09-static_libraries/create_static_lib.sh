#!/bin/bash

c=( *.c )
c_n=${#c[@]}
counter=0

while [ "$counter" -lt "$c_n" ]; do
    file="${c[counter]}"
    o_n=$(basename "$file" .c)
    gcc -c "$file" -o "${o_n}.o"

    (( counter++ ))
done

o_f=$(ls *.o 2>/dev/null)
ar rcs liball.a $o_f
