#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/

void print_number(int n)
{
	int copy, nth, size = 1, values = n % 10;

	n /= 10;
	copy = n;
	if (values < 0)
	{
		values *= -1, copy *= -1, n *= -1;
		_putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar('0' + values);
}
