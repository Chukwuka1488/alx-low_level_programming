#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* reference pointer p to dest */
	char *p = dest;
	int i = 0;

	/*
	 * iterate pointer p to get the last char
	 */
	while (*p != '\0')
	{
	p++;
	}

	/*
	 * iterate src to append to p depending on number of bytes
	 */
	while (*src != '\0')
	{
		i++;
		if (i <= n)
		{
			*p++ = *src++;
		}
		else
		{
			break;
		}
	}

	if (i >= n)
	{
		return (dest);
	}
	else
	{
		*p = '\0';

		return (dest);
	}
}
