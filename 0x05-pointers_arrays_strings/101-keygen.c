#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1] = {0};
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const size_t charset_size = sizeof(charset) - 1;

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
	password[i] = charset[rand() % charset_size];
	}

	printf("%s\n", password);

	return 0;
}

