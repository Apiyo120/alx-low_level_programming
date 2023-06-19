#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD _LIBRARY_PATH=.:$LD_LIBRARY_PATH
