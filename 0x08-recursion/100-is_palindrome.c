#include "main.h"

/**
 * _print_rev_recursive - prints a string in reverse recursively
 * @s: pointer to string to be printed
 * @reversed: pointer to buffer for reversed string
 * @i: index of next character to add to reversed string
 */
void _print_rev_recursive(char *s, char *reversed, int i)
{
	if (*s == '\0')
	{
		reversed[i] = '\0';
		return;
	}
	/* call recursive function */
	_print_rev_recursive(s + 1, reversed, i + 1);
	reversed[i] = *s;
}

/**
 * is_palindrome - checks if a string is a palindrome recursively
 * @s: pointer to string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char reversed[1024];
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	_print_rev_recursive(s, reversed, 0);

	for (i = 0; i < len; i++)
	{
		if (s[i] != reversed[i])
			return (0);
	}

	return (1);
}
