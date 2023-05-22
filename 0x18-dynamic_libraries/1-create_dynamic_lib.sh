#!/bin/bash

# Compile each .c file into corresponding .o file
for file in *.c; do
    gcc -c -fPIC "$file" -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Cleanup: remove the intermediate .o files
rm *.o

