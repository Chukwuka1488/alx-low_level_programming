#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in a sorted 
 * 							  sub-array of integers
 * @arr: Pointer to the first element of the array to search in
 * @left: Left boundary of the sub-array
 * @right: Right boundary of the sub-array
 * @val: Value to search for
 *
 * Return: The first index where value is located, or -1 on failure
 */
int binary_search_recursive(int *arr, size_t left, size_t right, int val)
{
	size_t mid;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
		printf("%d, ", arr[mid]);
	printf("%d\n", arr[mid]);

	mid = left + (right - left) / 2;
	if (arr[mid] == val && (mid == left || arr[mid - 1] != val))
		return (mid);
	if (arr[mid] >= val)
		return (binary_search_recursive(arr, left, mid, val));
	return (binary_search_recursive(arr, mid + 1, right, val));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @arr: Pointer to the first element of the array to search in
 * @arr_size: Number of elements in array
 * @val: Value to search for
 *
 * Return: The first index where value is located, or -1 on failure
 */
int advanced_binary(int *arr, size_t arr_size, int val)
{
	if (arr == NULL || arr_size == 0)
		return (-1);

	return (binary_search_recursive(arr, 0, arr_size - 1, val));
}
