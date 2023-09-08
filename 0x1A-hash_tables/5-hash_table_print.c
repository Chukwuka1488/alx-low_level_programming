#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * 
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int flag = 0; /* to manage comma placement */

    if (ht == NULL)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            if (flag == 1) /* to add a comma before the next key-value pair after the first one */
                printf(", ");

            printf("'%s': '%s'", node->key, node->value);
            flag = 1;
            node = node->next;
        }
    }

    printf("}\n");
}
