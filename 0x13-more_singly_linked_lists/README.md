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

#### 8.
This function takes as an argument a pointer to the head of the list (head). It iterates over the list, adding the value of each node’s n member to a running total (sum). When it reaches the end of the list, the function returns the total sum of all the data in the list.

#### 9.
This function takes as arguments a pointer to the head of the list (head), an index (idx) specifying where to insert the new node, and an integer value (n) to be assigned to the new node. The function first checks if the head pointer is NULL and returns NULL if it is. It then allocates memory for a new listint_t node using malloc. If the memory allocation fails, the function returns NULL. Otherwise, it assigns the value of n to the n member of the new node.

If the specified index is 0, the function sets the next member of the new node to point to the current head of the list and updates the head of the list to point to the new node. It then returns the address of the new node.

Otherwise, it traverses the list to find the node at position idx - 1. If this node does not exist (i.e., if idx is greater than or equal to the length of the list), the function frees the new node and returns NULL. Otherwise, it sets the next member of the new node to point to the next node in the list and updates the next member of node at position idx - 1 to point to the new node. The function then returns the address of the new node.

#### 10.
This function takes as arguments a pointer to the head of the list (head) and an index (index) specifying which node to delete. The function first checks if the head pointer or the list itself is NULL and returns -1 if either is true. It then uses a temporary pointer (temp) to hold the address of the current node while it traverses the list to find the node at position index.

If the specified index is 0, the function updates the head of the list to point to the next node and frees the current head node using the free function. It then returns 1 to indicate success.

Otherwise, it traverses the list to find the node at position index. If this node does not exist (i.e., if index is greater than or equal to the length of the list), the function returns -1 to indicate failure. Otherwise, it updates the next member of the previous node to point to the next node in the list and frees the current node using the free function. The function then returns 1 to indicate success.

#### 11.
This function takes as an argument a pointer to the head of the list (head). It uses two temporary pointers (prev and next) to keep track of the previous and next nodes while it iterates over the list. In each iteration, the function updates the next member of the current node to point to the previous node, effectively reversing the direction of the link. It then advances the prev and head pointers to their next positions and repeats this process until it reaches the end of the list.

After reversing all the links in the list, the function updates the head of the list to point to the last node (which is now the first node in the reversed list) and returns its address.

#### 11.
This function takes as an argument a pointer to the head of the list (head). It uses two temporary pointers (slow and fast) to traverse the list using the Floyd’s cycle-finding algorithm. The slow pointer advances one node at a time, while the fast pointer advances two nodes at a time. If there is a loop in the list, the two pointers will eventually meet at some point inside the loop.

If the function detects a loop, it prints the address and data of the node where the two pointers meet and exits the program with status 98. Otherwise, it continues to iterate over the list, printing the address and data of each node until it reaches the end of the list. The function returns the number of nodes in the list.

#### 12.
This function takes as an argument a pointer to the head of the list (h). It uses two temporary pointers (slow and fast) to traverse the list using the Floyd’s cycle-finding algorithm. The slow pointer advances one node at a time, while the fast pointer advances two nodes at a time. If there is a loop in the list, the two pointers will eventually meet at some point inside the loop.

If the function detects a loop, it breaks out of the loop and frees one more node before continuing to iterate over the rest of the list. Otherwise, it continues to iterate over the list, freeing each node until it reaches the end of the list. The function returns the number of nodes that were freed.

#### 13.
This function takes as an argument a pointer to the head of the list (h). It uses an array (addrs) to keep track of the addresses of nodes that have been visited while traversing the list. In each iteration, the function checks if the current node’s address is in the addrs array. If it is, this means that the current node is part of a loop and has already been freed, so the function sets the head of the list to NULL and returns the number of nodes that were freed.

Otherwise, it adds the current node’s address to the addrs array, frees the current node, and advances to the next node in the list. The function returns the number of nodes that were freed.

#### 14.
This function takes as an argument a pointer to the head of the list (head). It uses two temporary pointers (slow and fast) to traverse the list using the Floyd’s cycle-finding algorithm. The slow pointer advances one node at a time, while the fast pointer advances two nodes at a time. If there is a loop in the list, the two pointers will eventually meet at some point inside the loop.

If the function detects a loop, it resets the slow pointer to the head of the list and advances both pointers one node at a time until they meet again. The node where they meet is the start of the loop, so the function returns its address. If there is no loop in the list, the function returns NULL.