#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: the string to copy
 * @dest: the destination for the string
 * Description: including (\0), to the buffer pointed to by dest.
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
