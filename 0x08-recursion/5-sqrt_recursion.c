#include "main.h"

/**
 * _sqrt_helper - to get the sqrt
 * @n: given number
 * @next: iterative value
 *
 * Return: the square root of a number or -1
 */

int _sqrt_helper(int n, int next)
{
	if (next * next == n)
	{
	return (next);
	}
	else if (next * next > n)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_helper(n, next + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	/* base case */
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_helper(n, 0));
}
