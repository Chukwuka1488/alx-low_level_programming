/*
 * File: 2-str_concat.c
 * Author: Chukwuka Akibor
 */

#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory
 *         with concatenated string,or NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, k = 0;

	/* If s1 or s2 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find the length of s1 and s2 */
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);

	/* copy the content of s1 into concat */
	for (; k < i; k++)
		concat[k] = s1[k];

	/* copy the content of s2 into concat after s1 */
	for (; k < i + j; k++)
		concat[k] = s2[k - i];

	/* Add null terminator at the end of concatenated string */
	concat[k] = '\0';

	return (concat);
}
