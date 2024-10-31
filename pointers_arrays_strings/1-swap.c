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

	temp = *a; //temp recupere la valeur de a
	*a = *b; //a recupere la valeur de b
	*b = temp; // b recupere la valeur de temp
}
