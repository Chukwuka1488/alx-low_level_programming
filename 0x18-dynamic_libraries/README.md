### Dynamic Libraries
Here is a simple shell script that creates a dynamic library called liball.so from all the .c files in the current directory:

#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o

This script first compiles all the .c files in the current directory into object files using the gcc command with the -c and -fPIC flags. The -c flag tells gcc to generate object files, while the -fPIC flag generates position-independent code. The script also includes some additional flags such as -Wall, -Werror, -Wextra, and -pedantic to enable more warnings and treat them as errors.

After compiling the source code into object files, the script links the object files together using gcc with the -shared flag to create a dynamic library named liball.so. The -o flag specifies the name of the output file.

To use this script, save it to a file (e.g., create_lib.sh) in the same directory as your .c files, make it executable using the chmod +x create_lib.sh command, and then run it using the ./create_lib.sh command. This will create a dynamic library named liball.so in the current directory.
