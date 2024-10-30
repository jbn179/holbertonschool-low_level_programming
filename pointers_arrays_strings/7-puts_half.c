#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character, starting with the first character
 * @str: point the string
 * Description: prints every other character, starting with the first character
 */

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');

}