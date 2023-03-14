/*
 * File: 100-argstostr.c
 * Author: Chukwuka Akibor
 */

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string containing all arguments separated by '\n',
 * or NULL if ac == 0, av == NULL or on failure
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	/* Return NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Find the total length of all arguments */
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	/* Allocate memory for the new string (+1 for each '\n' and +1 for '\0') */
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	/* Copy each argument into str separated by '\n' */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	/* Add null terminator at the end of the string */
	str[k] = '\0';

	return (str);
}
