#include "main.h"

/**
 * binary_search_sqrt - use binary search to get the sqrt
 * @n: given number
 * @low: low value
 * @high: high value
 *
 * Return: the square root of a number or -1
 */

int binary_search_sqrt(int n, int low, int high)
{
	int mid;

	if (low > high)
	{
	return (-1);
	}

	mid = (low + high) / 2;

	if (mid * mid == n)
	{
	return (mid);
	}
	else if (mid * mid > n)
	{
	return (binary_search_sqrt(n, low, mid - 1));
	}
	else
	{
	return (binary_search_sqrt(n, mid + 1, high));
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
	return (binary_search_sqrt(n, 0, n));
}
