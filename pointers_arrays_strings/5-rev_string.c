#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Description: find length of a string, reverse it
 */

void rev_string(char *s)
{
	char temp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
	{
		length1++;
	}

	length2 = length1 - 1;

	for (i = 0; i < length1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[length2];
		s[length2--] = temp;
	}
}
