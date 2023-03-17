/*
 * File: 101-mul.c
 * Author: Chukwuka Akibor
 */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char **argv)
{
	long int num1, num2;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
