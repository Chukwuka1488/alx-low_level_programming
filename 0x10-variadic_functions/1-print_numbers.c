/*
 * File: 1-print_numbers.c
 * Author: Chukwuka Akibor
 */

#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers given in the varying arguments
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* initialize the argument list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);
		printf("%d", arg);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
