#include <stdio.h>

/**
 * interpolation_search - Implements the Interpolation Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Description: This function takes an array of integers, the size of the array,
 * and the value to search for as input. It uses the Interpolation Search
 * algorithm to find the index of the value in the array. If the value is not
 * found or if the array is NULL, it returns -1.
 *
 * Return: The first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t probe_position, low, high;

    if (array == NULL)
        return (-1);

    for (low = 0, high = size - 1; high >= low;)
    {
        probe_position = low + (((double)(high - low) /
                                 (array[high] - array[low])) *
                                (value - array[low]));
        if (probe_position < size)
            printf("Value checked array[%ld] = [%d]\n",
                   probe_position, array[probe_position]);
        else
        {
            printf("Value checked array[%ld] is out of range\n",
                   probe_position);
            break;
        }

        if (array[probe_position] == value)
            return (probe_position);
        if (array[probe_position] > value)
            high = probe_position - 1;
        else
            low = probe_position + 1;
    }

    return (-1);
}
