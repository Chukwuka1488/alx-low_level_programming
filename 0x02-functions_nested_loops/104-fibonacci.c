#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, fib3;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
		{
		fib3 = fib1 + fib2;
		printf("%lu, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
		}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (i = 93; i < 99; i++)
		{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
		half1 += 1;
		half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
		printf(", ");
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
		}

	printf("\n");
	return (0);
}

