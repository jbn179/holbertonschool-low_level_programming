#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - helper function to check if a number is a prime number
 * @n: the number to check
 * @i: the current divisor to check
 * Description: helper function to check if a number is a prime number
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Description: checks if a number is prime
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
