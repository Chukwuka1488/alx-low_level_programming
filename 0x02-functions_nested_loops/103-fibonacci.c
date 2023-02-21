#include <stdio.h>

/**
 * main - print the sum of the even-valued terms for a fibonacci series that do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int prev = 1, curr = 2, next, sum = 2;

	while (curr <= 4000000)
		{
		next = prev + curr;
		prev = curr;
		curr = next;

		if (curr % 2 == 0)
		sum += curr;
		}
	printf("%d\n", sum);
	return (0);
}
