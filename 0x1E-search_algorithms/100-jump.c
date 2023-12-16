#include <stdio.h>
#include <math.h>

/**
 * jump_search - Implements the Jump Search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Description: This function takes an array of integers, the size of the array,
 * and the value to search for as input. It uses the Jump Search algorithm to
 * find the index of the value in the array. It also prints the array being
 * searched every time it changes. If the value is not found or if the array is
 * NULL, it returns -1.
 *
 * Return: The first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    for (i = jump = 0; jump < size && array[jump] < value;)
    {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    jump = jump < size - 1 ? jump : size - 1;
    for (; i < jump && array[i] < value; i++)
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    return (array[i] == value ? (int)i : -1);
}
