#include "main.h"

/**
 * factorial - calc the factorial of a given number.
 * @n: given number
 *
 * Return: the factorial other -1 if n less than 0
 */

int factorial(int n)
{
	/* base case */
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
