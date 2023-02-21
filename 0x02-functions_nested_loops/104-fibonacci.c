#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib3;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 3; i < 98; i++)
		{
		fib3 = (fib1 + fib2) % 2147483648;
		if (fib3 < 0)
		{
		fib3 += 2147483648;
		}
		printf("%lu", fib3);
		if (i < 98)
		{
		printf(", ");
		}
		fib1 = fib2;
		fib2 = fib3;
		}

		printf("\n");
		return (0);
}
