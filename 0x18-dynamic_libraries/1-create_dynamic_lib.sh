#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

gcc -shared -o liball.so *.o
# Clean up - remove the object files
rm *.o
