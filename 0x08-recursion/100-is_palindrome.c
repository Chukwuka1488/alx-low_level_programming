#include "main.h"

/**
 * _strlen_recursive - get the length of a string
 * @s: given string
 *
 * Return: length of string
 */

int _strlen_recursive(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursive(s + 1));
}

/**
 * _check_palindrome - check if a string is a palindrome
 * @s: given string
 * @left: index of the leftmost string
 * @right: index of the rightmost string
 *
 * Return: true or false
 */

int _check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (_check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks if a string is a palindrome recursively
 * @s: pointer to string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;
	int left = 0;
	int check_pal;

	len = _strlen_recursive(s);
	check_pal = _check_palindrome(s, left, len - 1);

	if (!check_pal)
		return (0);
	return (1);
}
