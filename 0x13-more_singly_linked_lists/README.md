#### 0. Print list 
Write a function that prints all the elements of a listint_t list.

    Prototype: size_t print_listint(const listint_t *h);
    Return: the number of nodes
    Format: see example
    You are allowed to use printf

the print_listint function takes a pointer to the head of a listint_t list as a parameter. It iterates through the list using a while loop, printing the value of each node and incrementing the count variable. Finally, it returns the number of nodes in the list.

#### 1. List length 
Write a function that returns the number of elements in a linked listint_t list.

    Prototype: size_t listint_len(const listint_t *h);
the listint_len function takes a pointer to the head of a listint_t list as a parameter. It iterates through the list using a while loop, incrementing the count variable for each node. Finally, it returns the count, which represents the number of elements in the list.

#### 2. Add node 
Write a function that adds a new node at the beginning of a listint_t list.

    Prototype: listint_t *add_nodeint(listint_t **head, const int n);
    Return: the address of the new element, or NULL if it failed

In this code, the add_nodeint function takes a double pointer head and an integer n as parameters. It creates a new node using malloc and assigns the value n to the n field of the new node. The next field of the new node is set to the current head of the list. Finally, the head pointer is updated to point to the new node.

The function returns the address of the new node if the allocation is successful, or NULL if it failed.

#### 3. Add node at the end 
Write a function that adds a new node at the end of a listint_t list.

    Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
    Return: the address of the new element, or NULL if it failed

This function takes as arguments a pointer to the head of the list (head) and an integer value (n) to be assigned to the new node. The function first allocates memory for a new listint_t node using malloc. If the memory allocation fails, the function returns NULL. Otherwise, it assigns the value of n to the n member of the new node and sets its next member to NULL.

If the list is empty (i.e., *head is NULL), the function sets the head of the list to point to the new node and returns its address. Otherwise, it traverses the list to find the last node and sets its next member to point to the new node. The function then returns the address of the new node.

#### 4. Free list 
Write a function that frees a listint_t list.

    Prototype: void free_listint(listint_t *head);

This function takes as an argument a pointer to the head of the list (head). It iterates over the list, freeing each node using the free function. The function uses a temporary pointer (temp) to hold the address of the current node while it advances the head pointer to the next node in the list. This allows it to free the current node without losing access to the rest of the list.

After calling this function, all the nodes in the list will be freed and the head pointer should be set to NULL to indicate that the list is empty.

#### 5. Free  
Write a function that frees a listint_t list.

    Prototype: void free_listint2(listint_t **head);
    The function sets the head to NULL

This is the output of running the 4-main.c program after compiling it with the free_listint function. The program creates a linked list of integers using the add_nodeint_end function, then calls the print_listint function to print all the elements of the list. After printing the list, the program calls the free_listint function to free all the nodes in the list.

The program is run under Valgrind, a tool for detecting memory leaks and other memory-related issues. Valgrind’s output shows that the program completed successfully without any memory errors or leaks.

#### 6. Pop  
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

    Prototype: int pop_listint(listint_t **head);
    if the linked list is empty return 0


This function takes as an argument a pointer to the head of the list (head). It first checks if the list is empty (i.e., *head is NULL) and returns 0 if it is. Otherwise, it uses a temporary pointer (temp) to hold the address of the head node while it advances the head pointer to the next node in the list. The function then frees the head node using the free function and returns its data (n).

The output you provided shows that after running the 6-main.c program, which calls the pop_listint function twice, the first two nodes of the list are removed and their data is printed. Valgrind’s output also shows that all memory allocated by the program has been freed and that there are no memory leaks.

#### 7. Get node at index   
Write a function that returns the nth node of a listint_t linked list.

    Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
    where index is the index of the node, starting at 0
    if the node does not exist, return NULL


This function takes as arguments a pointer to the head of the list (head) and an index (index) specifying which node to return. The function iterates over the list, advancing the head pointer until it reaches the specified index or the end of the list. If the specified index is greater than or equal to the length of the list, the function returns NULL. Otherwise, it returns a pointer to the nth node of the list.

The output you provided shows that after running the 7-main.c program, which calls the get_nodeint_at_index function with an index of 5, the data of the 6th node in the list is printed (98).