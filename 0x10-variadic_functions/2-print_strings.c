/*
 * File: 2-print_strings.c
 * Author: Chukwuka Akibor
 */

#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings  with separators followed by a new line
 * @separator: string to be printed in between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/* Initialize the argument list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
