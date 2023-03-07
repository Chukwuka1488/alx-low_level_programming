#include "main.h"

/*
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
        int i;

        char c[] = "Hello, World!";

        for (i = 0; c[i] != '\0';  i++)
        {
                _putchar(c[i]);
        }
		return (0);
}
