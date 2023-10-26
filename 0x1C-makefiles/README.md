### Makefiles

Task 0: This Makefile has a single rule, all, which compiles main.c and school.c into an executable named school. When you run make -f 0-Makefile, it will execute the all rule and build your program.

Please note that this is a very basic Makefile and doesn’t include any error checking or dependency management. For larger projects, you would typically have more complex Makefiles.

Task 1: In this Makefile, CC is a variable that represents the compiler to be used, which is gcc in this case. SRC is another variable that represents the source files to be compiled, which are main.c and school.c.

The all rule compiles the source files into an executable named school. When you run make -f 1-Makefile, it will execute the all rule and build your program.

Please note that this is a very basic Makefile and doesn’t include any error checking or dependency management. For larger projects, you would typically have more complex Makefiles.

Task 3: In this Makefile, CC is a variable that represents the compiler to be used, which is gcc in this case. SRC is a variable that represents the source files to be compiled, which are all .c files in the current directory. OBJ is a variable that represents the object files to be generated from the source files. NAME is a variable that represents the name of the executable.

The all rule depends on the $(NAME) rule, which compiles the object files into an executable named school. The %.o: %.c rule compiles each .c file into a corresponding .o file. The clean rule removes all the object files and the executable.

When you run make -f 2-Makefile, it will execute the all rule and build your program. If you modify any of the source files and run make -f 2-Makefile again, it will recompile only the updated source files.

Please note that this Makefile still doesn’t include any error checking or dependency management. For larger projects, you would typically have more complex Makefiles.

Task 4: In this Makefile, CC is a variable that represents the compiler to be used, which is gcc in this case. SRC is a variable that represents the source files to be compiled, which are all .c files in the current directory. OBJ is a variable that represents the object files to be generated from the source files. NAME is a variable that represents the name of the executable. RM is a variable that represents the program to delete files, which is rm -f.

The all rule depends on the $(NAME) rule, which compiles the object files into an executable named school. The %.o: %.c rule compiles each .c file into a corresponding .o file. The clean rule removes all Emacs and Vim temporary files and the executable. The oclean rule removes all object files. The fclean rule executes both the clean and oclean rules. The re rule forces recompilation of all source files by executing the fclean and all rules.

When you run make -f 3-Makefile, it will execute the all rule and build your program. If you modify any of the source files and run make -f 3-Makefile again, it will recompile only the updated source files.

Please note that this Makefile still doesn’t include any error checking or dependency management. For larger projects, you would typically have more complex Makefiles.

Task 5: Let's break down the problem. For every land cell (1), we need to check its four neighbors (up, down, left, right). Every neighboring water cell (0) or edge of the grid will contribute 1 to the perimeter for that land cell.

Initialize perimeter as 0.
Loop through each cell in the grid.
If the cell is land (1):
Check the above cell. If it's water (0) or the edge of the grid, increment perimeter by 1.
Check the below cell. If it's water (0) or the edge of the grid, increment perimeter by 1.
Check the left cell. If it's water (0) or the edge of the grid, increment perimeter by 1.
Check the right cell. If it's water (0) or the edge of the grid, increment perimeter by 1.
Return the calculated perimeter.

Task 6: In this Makefile, CC is a variable that represents the compiler to be used, which is gcc in this case. CFLAGS is a variable that represents your favorite compiler flags. SRC is a variable that represents the source files to be compiled, which are all .c files in the current directory. OBJ is a variable that represents the object files to be generated from the source files. NAME is a variable that represents the name of the executable.

The all rule depends on the $(NAME) rule, which compiles the object files into an executable named school. The main.o and school.o rules compile each .c file into a corresponding .o file with your favorite compiler flags only if the header file m.h exists. The clean rule removes all Emacs and Vim temporary files and the executable. The oclean rule removes all object files. The fclean rule executes both the clean and oclean rules. The re rule forces recompilation of all source files by executing the fclean and all rules.

When you run make -f 100-Makefile, it will execute the all rule and build your program. If you modify any of the source files and run make -f 100-Makefile again, it will recompile only the updated source files.

Please note that this Makefile still doesn’t include any error checking or dependency management. For larger projects, you would typically have more complex Makefiles.
