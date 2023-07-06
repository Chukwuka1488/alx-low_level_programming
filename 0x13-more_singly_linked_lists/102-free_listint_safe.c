#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 1024

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to the head of the list
 * Return: Size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	const listint_t *addrs[MAX_NODES];
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
			if (*h == addrs[i])
			{
				*h = NULL;
				return (count);
			}

		addrs[count++] = *h;
		temp = *h;
		*h = (*h)->next;
		free(temp);
	}

	return (count);
}
