/*
 * File: 0-create_array.c
 * Author: Chukwuka Akibor
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: the number of elements in the array.
 * @c: the character to intialize each element with
 * Return: a pointer to the allocated and initialized array,
 *         or NULL if size is 0 or if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
