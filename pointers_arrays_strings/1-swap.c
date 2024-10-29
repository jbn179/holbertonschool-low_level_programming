#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Description: swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
