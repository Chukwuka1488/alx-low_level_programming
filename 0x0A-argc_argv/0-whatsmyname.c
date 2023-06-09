/*
 * File: 0-whatsmyname.c
 * Author: Chukwuka Akibor
 */


#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: pointer to an array of null-terminated strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
