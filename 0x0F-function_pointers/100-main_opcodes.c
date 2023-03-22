/*
 * This program takes in a single command line argument representing the number of bytes to print.
 * It then prints the opcodes of the `print_opcodes` function in hexadecimal format.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of its own main function
 * @num_bytes: Number of bytes to print
 *
 * Return: void
 */
void print_opcodes(int num_bytes);

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    int num_bytes = atoi(argv[1]);
    if (num_bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    print_opcodes(num_bytes);

    return (0);
}

/**
 * print_opcodes - Prints the opcodes of its own main function
 * @num_bytes: Number of bytes to print
 *
 * Return: void
 */
void print_opcodes(int num_bytes)
{
    unsigned char *main_opcodes = (unsigned char *) &print_opcodes;
	int i;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main_opcodes[i]);
    }
    printf("\n");
}
