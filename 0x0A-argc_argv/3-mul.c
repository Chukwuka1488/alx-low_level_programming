/*
 * File: 3-mul.c
 * Author: Chukwuka Akibor
 */

#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int a = 0;
	int b = 0;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
		a = a * 10 + argv[1][i] - '0';

	for (j = 0; argv[2][j] != '\0'; j++)
		b = b * 10 + argv[2][j] - '0';

	result = a * b;

	printf("%d\n", result);

	return (0);
}
