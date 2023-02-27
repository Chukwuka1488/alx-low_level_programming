#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    int i;

    srand(time(NULL)); // Seed the random number generator with current time

    // Generate a random password
    for (i = 0; i < PASSWORD_LENGTH; i++)
	{
        // Choose a random character from the set of valid characters
        password[i] = (rand() % ('~' - '!')) + '!'; // ASCII values of '!' to '~' are valid characters
    }
    password[PASSWORD_LENGTH] = '\0'; // Add null terminator at the end of the password

    printf("%s", password); // Print the password to stdout

    return 0;
}
