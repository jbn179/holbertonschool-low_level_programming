#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string of characters
 * Description: returns the length of a string
 * Return: lenght
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0') //calcule la longueur d'une chaine de caractères
	{
		length++;
	}

	return (length);
}
