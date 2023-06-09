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
*Write a program that prints its name, followed by a new line.*

    If you rename the program, it will print the new name, without having to compile it again
    You should not remove the path before the name of the program

This program uses the argc and argv parameters of the main function to access the command line arguments. The first argument (argv[0]) is always the name of the program. The program simply prints this argument followed by a new line.

If you rename the program and run it again, it will print its new name without having to recompile it.

*Write a program that prints the number of arguments passed into it.*

    Your program should print a number, followed by a new line
This program uses the argc parameter of the main function to determine the number of arguments passed to it. Since argc includes the name of the program as the first argument, we subtract 1 from it to get the number of arguments passed by the user.

The (void)argv; line is used to prevent a compiler warning about an unused parameter. It simply casts argv to void to indicate that we know it’s unused.

When you run this program with some arguments, it will print the number of arguments followed by a new line.

*Write a program that prints all arguments it receives.*

    All arguments should be printed, including the first one
    Only print one argument per line, ending with a new line
This program uses the argc and argv parameters of the main function to access the command line arguments. It uses a for loop to iterate over each argument and print it followed by a new line.

When you run this program with some arguments, it will print each argument on a separate line.

*Write a program that multiplies two numbers.*

    Your program should print the result of the multiplication, followed by a new line
    You can assume that the two numbers and result of the multiplication can be stored in an integer
    If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

In this program, we first check if two arguments were passed to the program (argc should be 3, since the first argument is the name of the program itself). If not, we print an error message and return 1.

Next, we use the atoi() function to convert the two command line arguments to integers. We then multiply the numbers and print the result using printf().

Note that this program assumes that the two numbers and the result of the multiplication can be stored in an integer. If the numbers are very large, you may need to use a different data type to store the result.

*Write a program that adds positive numbers.*

    Print the result, followed by a new line
    If no number is passed to the program, print 0, followed by a new line
    If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
    You can assume that numbers and the addition of all the numbers can be stored in an int

This program uses the argc and argv parameters of the main function to access the command line arguments. It uses a nested for loop to iterate over each argument and convert it from a string to an integer.

The inner for loop iterates over each character in the current argument. If it encounters a character that is not a digit ('0' to '9'), it prints an error message and returns 1 to indicate an error. Otherwise, it adds the value of the character to a running total for the current argument.

Once all arguments have been processed and converted to integers, the program adds them up and stores the result in a variable. Finally, it prints the result followed by a new line.

When you run this program with some positive integer arguments, it will print their sum followed by a new line. If you don’t provide any arguments or if one of the arguments contains non-digit characters, it will print an error message and return 1.

*Write a program that prints the minimum number of coins to make change for an amount of money.*

    Usage: ./change cents
    where cents is the amount of cents you need to give back
    if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
    you should use atoi to parse the parameter passed to your program
    If the number passed as the argument is negative, print 0, followed by a new line
    You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

    The program first checks that it has exactly one command line argument.
    The program then converts the argument to an integer using the atoi function. If the argument is negative, the program prints 0 and exits.
    The program initializes an array coins with the values of the coins we can use to make change.
    The program then iterates over the coins array, dividing the remaining amount of money by each coin and adding the result to a num_coins variable. The program then updates the remaining amount of money by taking the modulus of the division.
    Finally, the program prints the minimum number of coins required to make change.


