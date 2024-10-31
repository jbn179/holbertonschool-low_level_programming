#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 * Description: prints a string, then reverse it, followed by a new line.
 */

void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0') //calcule la longueur d'une chaine de caractères
	{
		i++;
	}

	length = i;

	for (j = length - 1; j >= 0; j--) 	//C'est une boucle for qui : Initialise j à length - 1 (le dernier index de la chaîne) 
	{									//Il parcourt la chaîne de la fin vers le début, affichant chaque caractère.
		_putchar(s[j]);					//Le résultat est l'affichage de la chaîne en ordre inverse.
	}

	_putchar('\n');
}
