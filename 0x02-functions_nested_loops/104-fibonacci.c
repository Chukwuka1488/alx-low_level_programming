#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, fib1 = 1, fib2 = 2, fib3;

	printf("%d, %d", fib1, fib2);

	for (i = 2; i < 98; i++)
		{
		fib3 = fib1 + fib2;
		printf(", %d", fib3);
		fib1 = fib2;
		fib2 = fib3;
		}

		printf("\n");
		return (0);
}
