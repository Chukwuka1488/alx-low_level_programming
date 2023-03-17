/*
 * File: 101-mul.c
 * Author: Chukwuka Akibor
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 10000

/**
 * is_number - checks if a string is a number
 * @str: string to check
 *
 * Return: 1 if str is a number, 0 otherwise
 */

int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

/**
 * multiply - multiplies two large positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: result of multiplication
 */

char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int i_n1 = 0, i_n2 = 0;
	int i, j;
	char *result;

	result = calloc(MAX_DIGITS + MAX_DIGITS + 1, sizeof(char));
	if (!result)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';

		i_n2 = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';

			int sum = n1 * n2 + result[i_n1 + i_n2] + carry;

			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}
	for (i = MAX_DIGITS + MAX_DIGITS - 1; result[i] == '\0'; --i)
		;
	for (; ~i; --i)
	{
		putchar(result[i] + '0');
		fflush(stdout);
	}
	putchar('\n');

	free(result);
	return (NULL);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always returns EXIT_SUCCESS or EXIT_FAILURE on error.
 */

int main(int argc, char **argv)
{
	if (argc != 3 || !is_number(argv[argc - 2]) || !is_number(argv[argc - 1]))
	{
		printf("Error\n");
		exit(98);
	}
	multiply(argv[argc - 2], argv[argc - 1]);
	return (EXIT_SUCCESS);
}
