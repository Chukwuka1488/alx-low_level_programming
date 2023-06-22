### C - Function pointers

##### This void (*anjula[])(int, float) is:

An array of pointers to functions that take an int and a float as parameters and returns nothing
The declaration void (*anjula[])(int, float) defines anjula as an array of pointers to functions that take an int and a float as parameters and return nothing (void). The square brackets [] indicate that anjula is an array, and the asterisk * before the name anjula indicates that it is a pointer. The parentheses () after the asterisk indicate that the pointer points to a function, and the parameters (int, float) inside the parentheses indicate the type of the parameters that the function takes.

##### If f is a pointer to a function that takes no parameter and returns an int, you can call the function pointed by f this way (check all correct answers if there is more than one):

To call the function pointed by f, you need to use the dereference operator * to access the function through the pointer and then call it using the parentheses (). Therefore, the correct way to call the function pointed by f is (*f)();.

f(); is also a correct way to call the function pointed by f.

When a function pointer is followed by parentheses (), it is treated as a function call to the function that the pointer points to. Therefore, both (*f)(); and f(); would call the function pointed by f.

Simply using f; would not call the function either, but rather it would just evaluate to the value of the pointer itself.

##### What does a pointer to a function point to (check all correct answers if there is more than one)?

The first byte of code of the function
Code
A pointer to a function points to the first byte of code of the function it is pointing to. This allows the program to call the function by jumping to its code location in memory. Pointers to functions do not point to data or the first character of the function name.


##### Which one is a pointer to a function?

int (*func)(int a, float b);
The declaration int (*func)(int a, float b) defines func as a pointer to a function that takes an int and a float as parameters, and returns an int. The parentheses () after the * indicate that func is a pointer to a function, and the parameters (int a, float b) inside the parentheses indicate the type and order of the parameters that the function takes.

The other options are not pointers to functions. (int *)func(int a, float b) is a function declaration that returns a pointer to an integer and takes an int and a float as parameters. int \*func(int a, float b) is a function declaration that returns a pointer to an integer and takes an int and a float as parameters. int func(int a, float b) is a function declaration that returns an integer and takes an int and a float as parameters. 

##### To store the address of this function:
```c
void neyo(void);
```

The correct answers are:
```c
f = &neyo;
f = neyo;
```
To store the address of the function neyo to the variable f of type pointer to a function that does not take any argument and does not return anything, you can use either of the following assignments:
```c
f = &neyo;
f = neyo;
```
The first assignment f = &neyo; takes the address of the function neyo using the address-of operator & and assigns it to f. The second assignment f = neyo; assigns the function neyo directly to f, and since neyo is already a function pointer, it can be assigned to f directly without using the address-of operator. Both of these assignments are correct and equivalent.

The other options *f = neyo; and *f = &neyo; are not correct because they attempt to assign the address of neyo or the address of the pointer to f through a dereference operation. Since f is already a pointer to a function, it should be assigned the address of the function directly or through the address-of operator.


#### Task 0:

Write a function that prints a name.

    Prototype: void print_name(char *name, void (*f)(char *));

This function takes a char* pointer name and a function pointer void (*f)(char *) as arguments. The function pointer f is a pointer to a function that takes a char* argument and returns nothing.

Inside the function, we call the function pointed by f and pass it the name argument. Since f is a function pointer, we need to dereference it using the * operator before calling it.

This implementation assumes that the function pointed by f is responsible for printing the name. You can pass any function that takes a char* argument and returns nothing as the second argument to print_name and it will call that function with the name argument.

#### Task 1
Write a function that executes a function given as a parameter on each element of an array.

    Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
    where size is the size of the array
    and action is a pointer to the function you need to use

The function takes three arguments: a pointer to an integer array array, its size size, and a function pointer void (*action)(int) that takes an integer argument and returns nothing.

The implementation uses a for loop to iterate over each element of the array and calls the function pointed to by action with the current element as its argument. The function pointer is dereferenced using the * operator before calling the function.

The implementation also checks if both array and action pointers are not NULL before executing the loop to prevent any potential errors.

The header description uses the Betty style, which is a popular style guide for C programming. It includes a brief summary of what the function does, followed by a description of each of its parameters and the return value. The @param tag is used to describe the parameters, and the @return tag is used to describe the return value (which is nothing, in this case).

size_t is a type defined in the standard library, usually in the <stddef.h> header file. It's an unsigned integer type used to represent the size of objects, and it's commonly used for array indices, sizes, and memory allocation.

size_t is guaranteed to be able to hold the size of the largest object that can be allocated on a particular system. It's also guaranteed to be an unsigned integer type, which means that it can't hold negative values.

The use of size_t in the function prototype ensures that the size parameter is an unsigned integer type that can hold the size of the array. This is important because array sizes are always non-negative integers, and using an unsigned type prevents overflow errors that could occur if a signed type were used.

In summary, size_t is a type defined in the standard library used to represent the size of objects, and it's commonly used for array indices and sizes. It's important to use an appropriate type like size_t for array sizes to prevent potential errors and ensure portability of the code.
