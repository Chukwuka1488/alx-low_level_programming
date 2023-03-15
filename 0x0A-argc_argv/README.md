### 

##### What is argv[argc]?
argv[argc] does not always exist. In a C program, argv is an array of pointers to the command-line arguments passed to the program. The first element of this array, argv[0], is a pointer to the program name. The remaining elements of the array point to the command-line arguments themselves.

The number of command-line arguments passed to the program is stored in the variable argc. Since array indices in C start at 0, the last element of the argv array has an index of argc - 1. This means that argv[argc] is actually one element past the end of the argv array and does not always exist  and so it is **NULL**.

##### What is argv[0]
argv[0] is the program name. In a C program, argv is an array of pointers to the command-line arguments passed to the program. The first element of this array, argv[0], is a pointer to a string containing the program name.

##### In the following command, what is argv[2]?
```bash
$ ./argv My School is fun
```
In the command $ ./argv My School is fun, argv[2] is "School". In a C program, argv is an array of pointers to the command-line arguments passed to the program. The first element of this array, argv[0], is a pointer to the program name ("./argv" in this case). The remaining elements of the array point to the command-line arguments themselves. In this case, argv[1] points to "My", argv[2] points to "School", argv[3] points to "is", and argv[4] points to "fun".

##### What is argc?
The size of the argv array
The number of command line arguments

argc is the number of command-line arguments passed to the program. In a C program, argc is an integer variable that holds the number of command-line arguments passed to the program. This includes the program name itself, which is always passed as the first argument.

For example, if a program is run with the command $ ./myprogram arg1 arg2, then argc will have a value of 3 because there are three command-line arguments: "./myprogram", "arg1", and "arg2".

##### In the following command, what is argv[2]?
```bash
$ ./argv "My School is fun"
```
NULL
The string "My School is fun" is passed as a single argument to the ./argv program.

In this case, argv[0] would contain "./argv" since it is the name of the program being executed, and argv[1] would contain the string "My School is fun", since it is the first (and only) command line argument passed to the program.

Therefore, there is no argv[2] in this command.

##### What is argv?
An array of size argc
An array containing the program command line arguments

argv is an array in C and C++ that contains the program command line arguments passed to the program when it is run. It stands for "argument vector".

The argv array is a pointer to an array of null-terminated strings, where each string represents a command line argument. The number of strings in the argv array is passed as the argc parameter.
Note that argv[0] contains the name of the program itself ("./myprogram" in the example above).

So to summarize, argv is an array of strings that contains the actual command line arguments passed to the program, and argc is the number of command line arguments passed.

##### In the following command, what is argv[2]?
```bash
$ ./argv "My School" "is fun"
```