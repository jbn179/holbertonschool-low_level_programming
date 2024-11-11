#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Description: function that concatenates two strings.
 * Return: pointer to the new string created (Success), or NULL (Error)
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	
	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

	return (concat);
}
