/*
 * File: 3-mul.c
 * Author: Chukwuka Akibor
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* convert command line args to integers */
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;

	printf("%d\n", result);

	return (0);
}
