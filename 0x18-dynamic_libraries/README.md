### Dynamic Libraries
Here is a simple shell script that creates a dynamic library called liball.so from all the .c files in the current directory:

#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o

This script first compiles all the .c files in the current directory into object files using the gcc command with the -c and -fPIC flags. The -c flag tells gcc to generate object files, while the -fPIC flag generates position-independent code. The script also includes some additional flags such as -Wall, -Werror, -Wextra, and -pedantic to enable more warnings and treat them as errors.

After compiling the source code into object files, the script links the object files together using gcc with the -shared flag to create a dynamic library named liball.so. The -o flag specifies the name of the output file.

To use this script, save it to a file (e.g., create_lib.sh) in the same directory as your .c files, make it executable using the chmod +x create_lib.sh command, and then run it using the ./create_lib.sh command. This will create a dynamic library named liball.so in the current directory.

To create a dynamic library that contains C functions that can be called from Python, you need to follow these steps:

Write the C source code for the functions you want to include in the library. Make sure to include any necessary header files and use the correct function prototypes.
Compile the C source code into a shared library using the gcc command with the -shared and -fPIC flags. The -shared flag tells gcc to create a shared library, while the -fPIC flag generates position-independent code. For example, to create a shared library named liboperations.so from a C source file named operations.c, you can use the following command: gcc -shared -fPIC -o liboperations.so operations.c.
Import the ctypes library in your Python code using the import ctypes statement.
Load the shared library into your Python code using the ctypes.CDLL or ctypes.cdll.LoadLibrary function. For example, to load a shared library named liboperations.so located in the current directory, you can use the following code: liboperations = ctypes.CDLL('./liboperations.so').
Call the C functions from your Python code using the loaded library object. You can access the functions in the shared library as attributes of the library object, and call them like regular Python functions. Make sure to pass arguments of the correct type and handle the return value appropriately.
