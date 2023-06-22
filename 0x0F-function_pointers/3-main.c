#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - performs simple operations.
  * @argc: number of arguments passed.
  * @argv: array of pointers to the arguments.
  *
  * Return: 0 on success, exit with status 98, 99, or 100 otherwise.
  */

int main(int argc, char *argv[])
{
	/* Variables to hold numbers */
	int a, b;
	/* Function pointer to hold the operation function */
	int (*operation)(int, int);

	/* Check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert arguments to int */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Get the operation function */
	operation = get_op_func(argv[2]);

	/**
	  * If the operation is invalid or if the operator
	  * string contains more than one char
	 */
	if (operation == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	/* If trying to divide by zero */
	if ((operation == op_div || operation == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Perform the operation and print the result */
	printf("%d\n", operation(a, b));

	return (0);
}
