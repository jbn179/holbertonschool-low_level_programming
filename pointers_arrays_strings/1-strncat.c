#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Description: concatenates two strings, using n bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
