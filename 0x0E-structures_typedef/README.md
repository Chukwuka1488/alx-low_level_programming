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



