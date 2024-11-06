#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate factorial for
 * Description: returns the factorial of a given number.
 * Return: factorial of n, or -1 if n is negative
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (1 * factorial(n - 1));

}
