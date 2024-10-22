#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Description: This function calculates the absolute value of the given integer.
 * It returns the non-negative value of n without changing it.
 *
 * Return: The absolute value of n
 */

int _abs(int n)

{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
