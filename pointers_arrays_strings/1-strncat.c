#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Description: concatenates two strings.
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
