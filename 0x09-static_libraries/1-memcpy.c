#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}
