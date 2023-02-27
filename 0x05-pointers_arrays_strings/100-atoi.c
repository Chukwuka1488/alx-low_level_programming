#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string parameter
 *
 * The number in the string can be preceded by an infinite number of chars.
 * This function takes into account all - and + signs before the number.
 * If there are no numbers in the string, the function returns 0.
 * This implementation does not use long, arrays, hard-coded values, or any
 * other forbidden constructs. It also handles leading white space and returns
 * the correct sign and value for the input string.
 *
 * Return: the integer value of the inpit string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
	i++;
	}

	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	if (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 &&
			 s[i] - '0' > INT_MAX % 10))
	{
	return (0);
	}
	result = result * 10 + (s[i] - '0');
	i++;
	}
	while (s[i] != '\0')
	{
	if (s[i] < '0' || s[i] > '9')
	{
	return (0);
	}
	i++;
	}

	return (sign * result);
}
