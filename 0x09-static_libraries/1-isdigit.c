#include <stdio.h>
#include "main.h"

/**
* _isdigit - checks for digit
* @c: digit to check
*
* Return: 1 if cis a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
