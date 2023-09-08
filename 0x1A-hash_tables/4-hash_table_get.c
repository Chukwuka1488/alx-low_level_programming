#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int idx;
    hash_node_t *node;

    /* if hash table is NULL or key is NULL or key is an empty string, return NULL */
    if (!ht || !key || !(*key))
        return (NULL);

    /* get the index of the key */
    idx = key_index((unsigned char *)key, ht->size);

    /* get the first node at that index */
    node = ht->array[idx];

    /* Traverse the linked list at that index */
    while (node)
    {
        /* compare the key with each key in the list */
        if (strcmp(node->key, key) == 0)
            return (node->value); /* if found, return the value */
        node = node->next; /* move to next node in the list */
    }

    /* If no match found */
    return (NULL);
}
