/*
 * File: 1-strdup.c
 * Author: Chukwuka Akibor
 */


#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *           containing a copy of the string input
 * @str: the string to be duplicated
 *
 * Return: a pointer to the newly allocated and
 *         initialized string, or NULL if str is NULL
 *         or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	/* Return NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	/* Allocate memory for the new string */
	new_str = malloc((len + 1) * sizeof(char));

	/* Return NULL if allocation fails */
	if (new_str == NULL)
	{
		return (NULL);
	}

	/* Copy the string to the new memory location */
	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';

	/* Return a pointer to the new string */
	return (new_str);
}
