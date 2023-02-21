#include <stdio.h>

/**
 * main - print the first 50 fibonacci compliant
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	long int fib1 = 1, fib2 = 2, fib3;

	printf("%ld, %ld", fib1, fib2);

	for (i = 2; i < 50; i++)
		{
		fib3 = fib1 + fib2;
		printf(", %ld", fib3);
		fib1 = fib2;
		fib2 = fib3;
		}
	printf("\n");
	return (0);
}
