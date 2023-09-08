#include "hash_tables.h"
#include <stdlib.h>  /* for malloc, free, and strdup */
#include <string.h>  /* for strcmp */

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key to add.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node, *tmp;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

    /* Check for a collision */
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            if (!tmp->value)
                return (0);
            return (1);
        }
        tmp = tmp->next;
    }

    node = malloc(sizeof(hash_node_t));
    if (!node)
        return (0);

    node->key = strdup(key);
    if (!node->key)
    {
        free(node);
        return (0);
    }

    node->value = strdup(value);
    if (!node->value)
    {
        free(node->key);
        free(node);
        return (0);
    }

    node->next = ht->array[index];
    ht->array[index] = node;
    
    return (1);
}
