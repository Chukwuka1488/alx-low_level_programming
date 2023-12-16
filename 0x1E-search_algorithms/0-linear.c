#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Description: This function takes an array of integers, the size of the array,
 * and the value to search for as input. It uses the Linear Search algorithm to
 * find the index of the value in the array. If the value is not found or if the
 * array is NULL, it returns -1.
 *
 * Return: The first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
