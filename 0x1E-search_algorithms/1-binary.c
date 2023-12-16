#include <stdio.h>

void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    printf("Searching in array: ");
    for (i = start; i < end; i++)
    {
        printf("%d", array[i]);
        if (i < end - 1)
            printf(", ");
        else
            printf("\n");
    }
}

int binary_search(int *array, size_t size, int value)
{
    size_t start = 0;
    size_t end = size - 1;
    size_t mid;

    if (!array)
        return (-1);

    while (start <= end)
    {
        print_array(array, start, end + 1);
        mid = start + (end - start) / 2;
        if (array[mid] < value)
            start = mid + 1;
        else if (array[mid] > value)
            end = mid - 1;
        else
            return (mid);
    }

    return (-1);
}
