#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i])
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
