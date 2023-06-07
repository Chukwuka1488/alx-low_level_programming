#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: given string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* prints first character of pointer */
	_putchar(*s);
	/* call recursive function */
	_puts_recursion(s + 1);
}
