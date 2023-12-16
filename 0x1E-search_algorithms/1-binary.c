#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t index;

    printf("Searching in array: ");
    for (index = 0; index < size; index++)
    {
        if (index > 0)
            printf(", ");
        printf("%d", array[index]);
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t middle;

    if (!array)
        return (-1);

    while (left <= right)
    {
        print_array(array + left, right - left + 1);
        middle = left + (right - left) / 2;
        if (array[middle] == value)
            return (middle);
        if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return (-1);
}
