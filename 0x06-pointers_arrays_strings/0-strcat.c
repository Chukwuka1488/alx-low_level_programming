#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	/* set pointer p to dest (value) */
	char *p = dest;

	/*
	 * iterate through p to find the the last character and
	 * reference it to pinter p
	 */
	while (*p != '\0')
	{
		p++;
	}

	/*
	 * iterate through the src string and append it to
	 * the end of pointer p
	 */
	while (*src != '\0')
	{
		*p++ = *src++;
	}

	/*
	 * add a terminating null byte to the end of pointer p
	 * after the concatenation
	 */
	*p = '\0';

	return (dest);
}
