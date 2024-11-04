#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string to be searched
 * @c: character to search for
 * Description: locates a character in a string.
 * Return: a pointer to the first occurrence of char c in the string s, or NULL
*/

char *_strchr(char *s, char c)
{

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
