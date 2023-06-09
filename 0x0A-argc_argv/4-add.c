/*
 * File: 4-add.c
 * Author: Chukwuka Akibor
 */

#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	int num;

	for (i = 1; i < argc; i++)
	{
		num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + argv[i][j] - '0';
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
