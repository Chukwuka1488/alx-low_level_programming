#include "main.h"

/**
 * wildcmp - compares two strings even if it has a special char *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if true otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	/* base case */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* check for wildcard */
	if (*s2 == '*')
	{
	return ((wildcmp(s1, s2 + 1)) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
	return (0);
	}
}
