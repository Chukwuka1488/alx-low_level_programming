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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
