#include "main.h"

/**
 * _pow_recursion - calc the value of x raised to the power of y
 * @x: base value
 * @y: power value
 *
 * Return: power value or -1
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}

	/* recursive function */
	return (x * _pow_recursion(x, y - 1));
}
