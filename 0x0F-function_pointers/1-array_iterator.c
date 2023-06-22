/*
 * File: 1-array_iterator.c
 * Author: Chukwuka Akibor
 */

#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the integer array
 * @size: size of the array
 * @action: function pointer to be executed on each
 * element of the array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
