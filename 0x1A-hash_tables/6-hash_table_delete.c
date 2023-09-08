#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 * 
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node, *tmp;

    if (!ht || !(ht->array))
        return;

    /* Traverse each index of the hash table array */
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        /* Traverse each node in the linked list for the given index */
        while (node)
        {
            tmp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = tmp;
        }
    }

    /* Free the hash table array */
    free(ht->array);

    /* Free the hash table */
    free(ht);
}
