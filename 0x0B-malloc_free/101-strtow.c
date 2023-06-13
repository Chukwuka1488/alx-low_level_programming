/*
 * File: 101-strtow.c
 * Author: Chukwuka Akibor
 */

#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words in str
 */

int word_count(char *str)
{
	int i = 0, wc = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			wc++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		else
			i++;
	}

	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words),
 * or NULL if str == NULL, str == "" or on failure
 */

char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k = 0, wc = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			k = i;
			while (str[k] && str[k] != ' ')
				k++;
			words[j] = malloc(sizeof(char) * ((k - i) + 1));
			if (words[j] == NULL)
			{
				for (; j >= 0; j--)
					free(words[j]);
				free(words);
				return (NULL);
			}
			k = 0;
			while (str[i] != ' ' && str[i] != '\0')
				words[j][k++] = str[i++];
			words[j++][k] = '\0';
		}
		else
			i++;
	}
	words[j] = NULL;

	return (words);
}
