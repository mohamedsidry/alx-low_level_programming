#!/bin/bash


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

ar -crs liball.a *.o

ranlib liball.a
