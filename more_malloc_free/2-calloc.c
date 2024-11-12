#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of character in the array
 * @size: size of each element
 * Description: function that allocates memory for an array, using malloc.
 * Return: poiter to the allocated memory
 * NULL if nmemb or size is 0, or if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = ptr;

	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
