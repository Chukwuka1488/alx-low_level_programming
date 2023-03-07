### C - Even more pointers, arrays and strings


##### Crackme
    Make sure that you have the crackme2 executable and the openssl library installed on your system. If you don't have the openssl library, install it using the command sudo apt install libssl-dev.

    Open the terminal and navigate to the directory where the crackme2 executable is located.

    Use the ldd command to list the shared libraries that the executable depends on. This will give you an idea of which libraries the program is using. For example, type ldd crackme2 and press Enter.

    Use the objdump command to disassemble the crackme2 executable. This will give you an idea of the code that the program is running. For example, type objdump -d crackme2 and press Enter.

    Use the gdb command to debug the crackme2 executable. This will allow you to set breakpoints and step through the program line by line to see what it's doing. For example, type gdb crackme2 and press Enter. Once inside the gdb prompt, type break main to set a breakpoint at the main function. Then type run to start the program. You can use the step command to step through the program line by line and see what it's doing.

    Use the ltrace command to trace the function calls made by the crackme2 executable. This will show you which functions the program is calling and what arguments it's passing to them. For example, type ltrace -s 200 crackme2 and press Enter.

    Once you have a good understanding of how the program is working, you should be able to identify the password that it's looking for. This could be done by analyzing the code, checking the function calls made by the program, or using a debugger to step through the program.

    Once you have found the password, create a new file in the same directory as the crackme2 executable and name it password. Open the file in a text editor and type the password in without any extra spaces or new lines.

    Save the file and exit the text editor. You should now have a file named password that contains the password for the crackme2 executable.
