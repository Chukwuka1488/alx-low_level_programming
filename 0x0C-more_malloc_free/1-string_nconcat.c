/*
 * File: 1-string_nconcat.c
 * Author: Chukwuka Akibor
 */


#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated space containing concatenated string,
 * or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, n);
	new_str[len1 + n] = '\0';

	return (new_str);
}
