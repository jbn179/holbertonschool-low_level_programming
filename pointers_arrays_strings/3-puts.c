#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to a string
 * Description: prints a string, followed by a new line, to stdout
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) //parcourt chaque caractère de la chaîne str jusqu'à ce qu'il trouve le caractère nul de fin de chaîne
	{
		_putchar(str[i]); //affiche le caractère à la position i dans la chaîne str.
	}
	_putchar('\n');//ajoute un saut de ligne
}
