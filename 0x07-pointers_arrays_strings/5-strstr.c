#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

/*
 * This function looks for a smaller word (needle)
 * inside a bigger word (haystack)
 * If the smaller word is found inside the bigger word,
 * it returns a pointer to the start of the smaller word
 * If the smaller word is not found inside the bigger word,
 * it returns a special value called NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
