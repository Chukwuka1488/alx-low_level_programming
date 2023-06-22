/*
 * File: 2-int_index.c
 * Author: Chukwuka Akibor
 */

/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: the comparison function
 *
 * Return: the index of the first element for which cmp doesn't
 *         or -1 if no uch element is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
