#!/bin/bash

for file in *.c; do
    if [[ -f "$file" ]]; then
        gcc -c -fPIC "$file"
    fi
done

gcc -shared -o liball.so "$file"
 
