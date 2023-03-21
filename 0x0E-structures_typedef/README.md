### C - Structures, typedef

##### Write a function that creates a new dog.

    Prototype: dog_t *new_dog(char *name, float age, char *owner);
    You have to store a copy of name and owner
    Return NULL if the function fails

This code defines a function named new_dog which creates a new instance of a struct dog_t, fills in its fields, and returns a pointer to it.

The new_dog function takes three arguments: name, age, and owner. name and owner are strings that represent the name of the dog and the name of the dog's owner, respectively. age is a floating-point number that represents the age of the dog.

First, the function checks if name and owner are not NULL and if age is not negative. If any of these conditions are true, the function returns NULL, indicating that the function was unsuccessful in creating a new dog.

If all the input checks pass, the function allocates memory for a new dog_t struct using the malloc function. If the memory allocation is unsuccessful, the function also returns NULL.

Next, the function allocates memory for the name and owner fields of the new dog_t struct. Again, if the memory allocation is unsuccessful, the function frees any previously allocated memory and returns NULL.

Then, the function calls _strcopy function (defined earlier in the code) to copy the name and owner strings into the newly allocated memory.

Finally, the function sets the age field of the dog_t struct to the input age value, and returns a pointer to the newly created dog_t struct.

The _strlen function is used to determine the length of a string, and the _strcopy function is used to copy a string from one memory location to another.

##### Write a function that frees dogs.

    Prototype: void free_dog(dog_t *d);

This code defines a function named free_dog that takes a pointer to a struct dog_t as input and frees the memory that was allocated to it.

The function first checks if the input pointer d is NULL. If d is NULL, then there is no memory that was allocated to the dog_t struct, and therefore no need to free any memory. The function simply returns.

If d is not NULL, the function frees the memory allocated for the owner and name fields of the dog_t struct using the free() function. This is because these fields were allocated using the malloc() function in the new_dog() function (defined elsewhere).

Finally, the function frees the memory allocated for the dog_t struct itself using free(). This ensures that all memory allocated to the struct is released and not left hanging in the heap.

Overall, this function serves as a cleanup mechanism for the dog_t struct that was created by the new_dog() function, preventing memory leaks in the program.


##### Write a function that initialize a variable of type struct dog

    Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

This code defines a function named init_dog that initializes a variable of type struct dog.

The function takes four parameters:

    A pointer to a struct dog variable, d, that is to be initialized.
    A character pointer, name, that represents the name of the dog.
    A floating-point number, age, that represents the age of the dog.
    A character pointer, owner, that represents the owner of the dog.

The function first checks if the pointer d is not NULL. If d is not NULL, it assigns the name, age, and owner values passed in to the corresponding fields of the d variable using the -> operator.

Note that the name and owner fields are simply assigned the pointer values passed in, rather than allocating new memory for these fields. This means that the name and owner fields of the d variable are pointers to the same memory locations as the name and owner parameters passed to the function. Therefore, if the values of name or owner are changed after the function is called, these changes will also affect the name and owner fields of the d variable.

Overall, this function is used to initialize the fields of a struct dog variable, making it easier to create and initialize new dog structs in the main program.

##### Write a function that prints a struct dog

    Prototype: void print_dog(struct dog *d);
    Format: see example bellow
    You are allowed to use the standard library
    If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
    If d is NULL print nothing.

This is a C program that defines a function called print_dog that takes a pointer to a struct dog as its argument and prints the data members of the structure to the standard output in a certain format. The dog.h header file is included, which should contain the definition of the struct dog type.

The function first checks if the pointer to the structure is NULL and returns without printing anything if it is.

Then, for each member of the struct dog type, the function checks if it is NULL or has an invalid value (in the case of age), and prints the appropriate message to the standard output.

If the members of the struct dog type are not NULL and have valid values, the function prints the member's value in a specific format using printf. The printf function is used to format and print the string, with %s and %f being used as placeholders for the name and age members of the struct dog type respectively.


