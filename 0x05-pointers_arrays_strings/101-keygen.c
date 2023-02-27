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
	char password[PASSWORD_LENGTH + 6];
	int i;
	srand(time(NULL));

	password[0] = 'T';
        password[1] = 'a';
        password[2] = 'd';
        password[3] = 'a';

	for (i = 4; i < PASSWORD_LENGTH; i++)
	{
		password[i] = (rand() % ('~' - '!')) + '!';
	}
        password[PASSWORD_LENGTH + 4] = '\n';
	password[PASSWORD_LENGTH + 5] = '\0';
	printf("%s", password);
	return 0;
}
