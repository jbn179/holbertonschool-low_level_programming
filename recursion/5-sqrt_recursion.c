#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper -  returns the natural square root of a number.
 * @n: the number to find the square root of
 * @i: the current guess
 * Description:  returns the natural square root of a number.
 * Return: the natural square root of n, or -1 if it doesn't exist
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number to calculate the square root of
 * Description:  returns the natural square root of a number.
 * Return: the natural square root of n, or -1 if it doesn't exist
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
