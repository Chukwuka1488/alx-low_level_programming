/*
 * File: 0-print_name.c
 * Author: Chukwuka Akibor
 */

#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: name a pointer to the name print
 * @f: a function pointer to a function that takes a char*
 * argument and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
