#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination memory area where the data will be copied
 * @src: pointer to the source memory area from which the data will be copied
 * @n: number of bytes to copy
 * Description: copies memory area.
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
