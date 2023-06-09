#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * main - Entry point
 * @s: pointer s
 * @b: constant byte to be filled
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}

	return (s);
}
