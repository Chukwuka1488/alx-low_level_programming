#include "main.h"

/**
 * is_prime_number_helper - Checks if number a prime number
 * @n: The integer to check for primality
 * @i: value to help check primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number_helper(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
		}
	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if number a prime number
 * @n: The integer to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
