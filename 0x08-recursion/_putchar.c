#include "main.h"

/**
 * _putchar - writes a single character
 * @c: string
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
