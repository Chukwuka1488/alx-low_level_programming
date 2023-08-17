#include <stdio.h>
#include <stdbool.h>

/**
 * is_palindrome - checks if an integer is a palindrome
 * @n: the integer to check
 *
 * Return: true if n is a palindrome, false otherwise
 */
bool is_palindrome(int n)
{
    int reversed = 0;
    int original = n;

    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

/**
 * main - finds the largest palindrome made from the product of two 3-digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
    int largest_palindrome = 0;
	FILE *fp;

    for (i = 100; i <= 999; i++)
    {
        for (j = 100; j <= 999; j++)
        {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome)
            {
                largest_palindrome = product;
            }
        }
    }

	fp = fopen("102-result", "w");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Could not open file\n");
		return (1);
	}

	fprintf(fp, "%d", largest_palindrome);
	fclose(fp);

    return 0;
}
