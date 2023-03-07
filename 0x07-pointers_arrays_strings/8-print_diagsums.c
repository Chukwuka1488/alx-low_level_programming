#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size of array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	/* loop through to calculate the sums of the diagonals */
	for (i = 0; i < size * size; i += size + 1)
	{
	sum1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
	sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
