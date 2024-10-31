#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of a string
 * @str: point the string
 * Description: prints second half of a string
 */

void puts_half(char *str) //La fonction prend un pointeur vers une chaîne de caractères comme argument et ne retourne rien (void).
{
	int len, i, n;	//Variables pour la longueur et les compteurs.

	len = 0;

	while (str[len] != '\0')	//La boucle while parcourt la chaîne jusqu'au caractère nul ('\0') et incrémente len.
	{
		len++;
	}

	if (len % 2 == 0)	//Si la longueur est paire (len % 2 == 0) 
	{
		for (i = len / 2; str[i] != '\0'; i++)	//La boucle for commence à len / 2 (milieu exact de la chaîne) 
		{										//et affiche tous les caractères jusqu'à la fin
			_putchar(str[i]);
		}
	}

	else	//Si la longueur est impaire
	{
		for (n = (len - 1) / 2; n < len - 1; n++)	//La boucle for commence à (len - 1) / 2 (arrondi inférieur du milieu) 
		{											//et affiche les caractères suivants jusqu'à la fin
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
