#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - generates a random valid password for 101-crackme
 * Return: Always 0.
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;
	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = (rand() % ('~' - '!')) + '!';
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);
	return 0;
}
