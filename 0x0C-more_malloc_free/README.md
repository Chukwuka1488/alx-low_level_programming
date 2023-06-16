### C - More malloc, free

##### malloc returns an address
malloc is a function in the C programming language that allocates memory dynamically. It returns a pointer to the first byte of the allocated memory block if successful. So the statement “malloc returns an address” is True.

##### malloc returns a pointer

##### Check this code
```c
int cp(void)
{
    char *s;

    s = malloc(12);
    strcpy(s, "Best School");
    return (0);
}
```
There are a couple of issues with this code. Firstly, malloc can fail and return NULL, so it’s always a good idea to check its return value before using the pointer it returns. Secondly, the string “Best School” has 11 characters plus the null terminator \0, so it requires 12 bytes of memory to store. However, malloc(12) only allocates 12 bytes of memory which is not enough to store the copy of the string “Best School” including the null terminator.

So the correct answers are:

malloc can fail so we should check its return value all the time before using the pointers returned by the function.
You don’t have enough space to store the copy of the string “Best School”
Is there anything else you would like to know about this code or other programming concepts?

Received message. There are a couple of issues with this code. Firstly, `malloc` can fail and return `NULL`, so it's always a good idea to check its return value before using the pointer it returns. Secondly, the string "Best School" has 11 characters plus the null terminator `\0`, so it requires 12 bytes of memory to store. However, `malloc(12)` only allocates 12 bytes of memory which is not enough to store the copy of the string "Best School" including the null terminator. So the correct answers are: - malloc can fail so we should check its return value all the time before using the pointers returned by the function. - You don’t have enough space to store the copy of the string “Best School” Is there anything else you would like to know about this code or other programming concepts?

##### check this code
```c
int main(void)
{
    int *ptr;

    *ptr = 98;
    printf("%d\n", *ptr);
    return (0);
}
```
This code has undefined behavior. ptr is an uninitialized pointer and dereferencing it with \*ptr = 98; can cause a segmentation fault or other unexpected behavior. As a result, it’s impossible to predict what will be printed on the terminal.

It’s important to always initialize pointers before using them to avoid undefined behavior.

##### To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use
malloc(10 * sizeof(int))

##### You can do this:

```c
char *s;

s = strdup("Best School");
if (s != NULL)
{
    free(s);
}
```
Yes

##### The memory space reserved when calling malloc is on:

The heap

##### You can do this:

```c
char str[] = "Best School";

free (str);
```
No

##### If I want to copy the string “Best School” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):

malloc(12)

malloc(strlen(“Best School”) + 1)

malloc(sizeof(“Best School”))

To reserve enough space for the string “Best School” in memory using malloc, you need to allocate enough bytes to store all the characters in the string plus the null terminator \0. The strlen function returns the length of a string excluding the null terminator, so you can use malloc(strlen("Best School") + 1) to allocate enough memory.

The sizeof operator returns the size of its operand in bytes. When applied to a string literal like “Best School”, it returns the size of the entire array including the null terminator. So you can also use malloc(sizeof("Best School")) to allocate enough memory.

So the valid answers are:

malloc(strlen(“Best School”) + 1)
malloc(sizeof(“Best School”))

##### You can do this:
```c
free("Best School");
```

No, you cannot do this. The free function is used to deallocate memory that was previously allocated by a call to malloc, calloc, or realloc. It takes a pointer to the memory block that needs to be freed as an argument.

In this case, “Best School” is a string literal and its memory is not dynamically allocated. Attempting to free it using the free function will result in undefined behavior.

##### Write a function that allocates memory using malloc.

    Prototype: void *malloc_checked(unsigned int b);
    Returns a pointer to the allocated memory
    if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
The function takes an unsigned integer b as its argument, which represents the number of bytes to allocate. It returns a void pointer to the allocated memory.

Inside the function, malloc is called with the given size b. If the allocation fails, malloc returns a null pointer, which is checked with an if statement. If ptr is null, an error message is printed to the standard error stream using fprintf, and the program is terminated with a status value of 98 using exit.

If the allocation was successful, the function returns the pointer to the allocated memory.

##### Write a function that concatenates two strings.

    Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
    The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
    If the function fails, it should return NULL
    If n is greater or equal to the length of s2 then use the entire string s2
    if NULL is passed, treat it as an empty string

This function takes two strings s1 and s2 and an unsigned integer n as arguments. It calculates the length of each string using strlen and checks if n is greater than or equal to the length of s2. If it is, it sets n to the length of s2.

The function then allocates memory for the concatenated string using malloc. The size of the memory block is calculated as the sum of the length of s1, n, and 1 for the null terminator. If malloc fails and returns NULL, the function returns NULL.

The function then uses memcpy to copy the contents of each string into the newly allocated memory block. It copies all characters from s1 followed by the first n characters from s2. Finally, it adds a null terminator at the end of the concatenated string and returns a pointer to it.

##### Write a function that allocates memory for an array, using malloc.

    Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
    The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
    The memory is set to zero
    If nmemb or size is 0, then _calloc returns NULL
    If malloc fails, then _calloc returns NULL

This function takes two unsigned integers nmemb and size as arguments. It checks if either nmemb or size is 0 and returns NULL if either is true.

The function then calls malloc to allocate memory for the array. The size of the memory block is calculated as the product of nmemb and size. If malloc fails and returns NULL, the function returns NULL.

The function then uses memset to set all bytes in the allocated memory block to 0. Finally, it returns a pointer to the allocated memory.


##### Write a function that creates an array of integers.

    Prototype: int *array_range(int min, int max);
    The array created should contain all the values from min (included) to max (included), ordered from min to max
    Return: the pointer to the newly created array
    If min > max, return NULL
    If malloc fails, return NULL


This function takes two integers min and max as arguments. It checks if min is greater than max and returns NULL if it is.

The function then calls malloc to allocate memory for the array. The size of the memory block is calculated as the product of the number of elements in the array (max - min + 1) and the size of each element (sizeof(int)). If malloc fails and returns NULL, the function returns NULL.

The function then uses a loop to initialize each element in the array with values from min to max. Finally, it returns a pointer to the newly created array.

##### Write a function that reallocates a memory block using malloc and free

    Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
    where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
    old_size is the size, in bytes, of the allocated space for ptr
    and new_size is the new size, in bytes of the new memory block
    The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
    If new_size > old_size, the “added” memory should not be initialized
    If new_size == old_size do not do anything and return ptr
    If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
    If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
    Don’t forget to free ptr when it makes sense

The above code is a C function that reallocates a memory block using malloc and free. The function takes three arguments: ptr, old_size, and new_size.

ptr is a pointer to the memory previously allocated with a call to malloc. old_size is the size, in bytes, of the allocated space for ptr. And new_size is the new size, in bytes of the new memory block.

The function first checks if the new size is equal to the old size. If it is, then it simply returns the original pointer without doing anything else.

If ptr is NULL, then the call to _realloc is equivalent to calling malloc(new_size) and returning its result.

If new_size is equal to zero and ptr is not NULL, then the call to _realloc is equivalent to calling free(ptr) and returning NULL.

Otherwise, if none of these conditions are met, then a new memory block of size new_size bytes is allocated using malloc. If this allocation fails (i.e., if malloc returns NULL), then _realloc returns NULL as well.

The contents of the original memory block pointed to by ptr are then copied over to this newly allocated memory block using the C library function memcpy. The number of bytes copied over depends on whether old_size < new_size or not. If old_size < new_size, then all old_size bytes are copied over. Otherwise (i.e., if old_size >= new_size), only new_size bytes are copied over.

Finally, after copying over these contents from the original memory block pointed to by ptr into this newly allocated memory block pointed to by new_ptr , ptr itself gets freed using free(ptr) . And _realloc returns this newly allocated pointer (i.e., it returns new_ptr).

##### Write a program that multiplies two positive numbers.

    Usage: mul num1 num2
    num1 and num2 will be passed in base 10
    Print the result, followed by a new line
    If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
    num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
    You are allowed to use more than 5 functions in your file

This program takes two command-line arguments num1 and num2, which should be positive numbers in base 10. It then checks if the number of arguments is correct and if both arguments are composed only of digits. If either of these conditions is not met, it prints “Error” followed by a new line and exits with a status of 98.

If the input is valid, the program converts num1 and num2 from strings to long integers using the C library function atol, multiplies them together and prints the result followed by a new line.
