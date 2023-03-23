/*
 * File: 0-sum_them_all.c
 * Author: Chukwuka Akibor
 */

/**
 * sum_them_all - function that sums of all its parameters
 * @n: count of arguments
 *
 * Return: the sum of all arguments
 */

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list args;

	/* Initialize the argument list */
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		/* get the next argument value */
		sum += va_arg(args, int);
	}

	/* Clean Up */
	va_end(args);
	return (sum);
}
