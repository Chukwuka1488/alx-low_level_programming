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
This function takes a char* pointer name and a function pointer void (*f)(char *) as arguments. The function pointer f is a pointer to a function that takes a char* argument and returns nothing.

Inside the function, we call the function pointed by f and pass it the name argument. Since f is a function pointer, we need to dereference it using the * operator before calling it.

This implementation assumes that the function pointed by f is responsible for printing the name. You can pass any function that takes a char* argument and returns nothing as the second argument to print_name and it will call that function with the name argument.
