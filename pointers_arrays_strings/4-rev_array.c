#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element in the array
 * @n: the number of elements in the array
 * Description: reverses the content of an array of integers
 */

void reverse_array(int *a, int n)
{

int start, end, temp;

for (start = 0, end = n - 1; start < end; start++, end--)
{
    temp = a[start];
    a[start] = a[end];
    a[end] = temp;
}

}
