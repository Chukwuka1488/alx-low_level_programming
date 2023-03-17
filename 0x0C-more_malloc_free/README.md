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
