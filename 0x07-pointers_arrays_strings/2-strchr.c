#include "main.h"

/**
 * _strchr - locates a chararacter in a string
 * @s: the string
 * @c: the character to locate
 *
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			return (ptr);
		}
		s++;
	}

	return (ptr);
}
