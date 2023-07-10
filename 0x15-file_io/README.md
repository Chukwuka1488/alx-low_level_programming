### C - File I/O


##### Question #0

What is the oflag used to open a file with the mode read only?

    O_RDWR

    O_RDONLY -> Ans

    O_WRONLY

##### Question #1

What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?

    The text will be printed on the terminal but I can’t pipe it

    The text will be printed on the terminal on the standard output -> Ans

    Segmentation fault

    Nothing

Tips:

Just try it! :)
##### Question #2

What is the unistd symbolic constant for the Standard error?

    STDERR_FILENO -> Ans

    STDOUT_FILENO

    STDIN_FILENO

##### Question #3

What is the oflag used to open a file in mode read + write?

    O_RDWR -> Ans

    O_RDONLY

    O_WRONLY

##### Question #4

When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.

    False

	True -> Ans

##### Question #5

What is the return value of the system call open if it fails?

    98

    -1 -> Ans

    0

##### Question #6

What is the unistd symbolic constant for the standard input?

    STDERR_FILENO

    STDOUT_FILENO

    STDIN_FILENO -> Ans

##### Question #7

What system call would you use to write to a file descriptor? (select all correct answers)

    write -> Ans

    fprintf

    printf

##### Question #8

Without context, on Ubuntu 14.04 LTS, write is a … (please select all correct answers):

    kernel routine

    game

    library call

    system call -> Ans

    executable -> Ans

##### Question #9

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):

    5

    2

    3 -> Ans

    6

    4

    1

    0

##### Question #10

is open a function or a system call? (select all valid answers)

    it’s a kernel routine

    it’s a function provided by the kernel -> Ans

    it’s a library call

    it’s a system call -> Ans

    it’s a function -> Ans

##### Question #11

Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS? (select all correct answers):

    O_WRONLY

    (O_RDONLY << 1)

    (O_RDONLY + O_WRONLY)

    O_RDONLY

    (O_RDONLY | O_WRONLY)

    3 & 2 -> Ans

    (O_WRONLY << 1) -> Ans

    1 << 1 -> Ans

    2 -> Ans

    3

    (O_RDONLY & O_WRONLY)

    3 | 2

    (O_RDONLY && O_WRONLY)

    1

    0

Tips: Use printf or read the headers to see the definitions/values of these macros.
##### Question #12

why? #AlwaysAskWhy

    Because this will be the third opened file descriptor for my process

    I don’t care I never ask why, just let me access the tasks!

    Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing. -> Ans

    Because this will be the second opened file descriptor for my process

    Because this will be the first opened file descriptor and we start counting starting from 1

    Because this will be the first opened file descriptor and in CS we start counting starting from 0

##### Question #13

What is the unistd symbolic constant for the standard output?

    STDERR_FILENO

    STDOUT_FILENO -> Ans

    STDIN_FILENO

##### Question #14

What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?

    O_WRONLY | O_CREAT | O_APPEND -> Ans

    O_RDWR | O_CREAT | O_APPEND

    O_WRONLY | O_CREAT | O_EXCL

    O_WRONLY

