#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for a singly linked list */
typedef struct list_s
{
    char *str;              /* String data */
    unsigned int len;       /* Length of the string */
    struct list_s *next;    /* Pointer to the next node */
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
void free_list(list_t *head);
void __attribute__((constructor)) pre_main(void);

#endif /* LISTS_H */
