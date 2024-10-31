#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character, starting with the first character
 * @str: point the string
 * Description: prints every other character, starting with the first character
 */

void puts2(char *str)	//La fonction prend un pointeur vers une chaîne de caractères comme argument et ne retourne rien (void)
{
	int i, j;	//Variables utilisées comme compteurs.

	i = 0;

	while (str[i] != '\0') //La boucle while parcourt la chaîne jusqu'au caractère nul ('\0') et incrémente i
	{
		i++;
	}

	for (j = 0; j < i; j += 2) //La boucle for parcourt la chaîne de 0 à i (longueur de la chaîne) par pas de 2 (j += 2)
	{
		_putchar(str[j]);	//À chaque itération, _putchar(str[j]) affiche le caractère à la position j
	}

	_putchar('\n');

}
