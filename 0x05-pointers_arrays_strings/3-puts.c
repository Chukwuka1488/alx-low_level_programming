#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
	_putchar(str[len]);
	len++;
	}
	_putchar('\n');
}
