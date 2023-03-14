### C - malloc, free

##### 0-create_array.c
This function takes two arguments size and c representing the size of the array and the character to initialize it with respectively. If size is 0, it returns NULL. The function allocates enough memory to hold an array of size characters and initializes all elements to c. It returns a pointer to this newly allocated space in memory that contains the initialized array. If memory allocation fails, it returns NULL.

##### 1-strdup.c
This function takes one argument str representing the string to be duplicated. If str is NULL, it returns NULL. The function finds the length of str and allocates enough memory to hold a copy of it. It then copies the contents of str into this newly allocated space and adds a null terminator at the end. The function returns a pointer to this newly allocated space in memory that contains the duplicated string. If memory allocation fails, it returns NULL.

##### 2-str_concat.c
This function takes two strings s1 and s2 as arguments. If either s1 or s2 is NULL, it is treated as an empty string. The function finds the length of both strings and allocates enough memory to hold the concatenated string. It then copies the contents of s1 and s2 into this newly allocated space and adds a null terminator at the end. The function returns a pointer to this newly allocated space in memory that contains the concatenated string. If memory allocation fails, it returns NULL.

##### 3-alloc_grid.c
This function takes two arguments width and height representing the dimensions of the grid. If either width or height is 0 or negative, it returns NULL. The function allocates enough memory to hold a height by width grid and initializes all elements to 0. It returns a pointer to this newly allocated space in memory that contains the 2D array. If memory allocation fails at any point, it frees any previously allocated memory and returns NULL.

##### 4-free_grid.c
This function takes two arguments: grid, which is a pointer to the 2D grid to be freed, and height, which represents the number of rows in the grid. The function first frees each row of the grid and then frees the grid itself.

##### 100-argstostr.c
This function takes two arguments ac and av representing the argument count and argument vector respectively. If ac is 0 or av is NULL, it returns NULL. The function finds the total length of all arguments and allocates enough memory to hold a new string containing all arguments separated by \n. It then copies each argument into this newly allocated space followed by a \n. The function returns a pointer to this newly allocated space in memory that contains the concatenated string. If memory allocation fails, it returns NULL.

##### 101-strtow.c
This function takes one argument str representing the string to be split. If str is NULL or empty (""), it returns NULL. The function counts the number of words in str and allocates enough memory to hold an array containing these individual null-terminated strings. It then splits str into individual null-terminated strings separated by spaces and stores them in this newly allocated space. The last element of this returned array is NULL. If memory allocation fails at any point or there are no valid substrings found within string, it frees any previously allocated memory and returns NULL.
