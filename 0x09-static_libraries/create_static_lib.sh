#!/bin/bash
gcc -c  -Werror -Wextra *.c
ar -rcs liball.a *.o
ranlib liball.a
