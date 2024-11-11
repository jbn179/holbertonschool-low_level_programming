#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string given as parameter
 * Description: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Return: if success, returns a pointer to the duplicated string,
 * returns NULL if insufficient memory was available,
 * returns NULL if str = NULL
*/

char *_strdup(char *str)
{
	char *dup;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] ; length++)
	{
		;
	}

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
