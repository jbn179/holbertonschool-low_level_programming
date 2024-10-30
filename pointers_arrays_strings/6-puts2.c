#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character, starting with the first character
 * @str: point the string
 * Description: prints every other character, starting with the first character
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
