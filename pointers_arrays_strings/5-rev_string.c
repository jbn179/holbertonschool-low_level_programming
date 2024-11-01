#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Description: find length of a string, reverse it
 */

void rev_string(char *s)
{
	char temp;	//Variable temporaire pour échanger les caractères.
	int i, length1, length2;

	length1 = 0;	// Initialisation des variables de longueur
	length2 = 0;

	while (s[length1] != '\0')	//La boucle while parcourt la chaîne jusqu'au caractère nul ('\0') et incrémente length1
	{
		length1++;
	}

	length2 = length1 - 1;	//length2 pointe vers le dernier caractère de la chaîne.

	for (i = 0; i < length1 / 2; i++)	//La boucle for s'exécute pour la moitié de la longueur de la chaîne
	{
		temp = s[i];			//Stocke temporairement le caractère du début.
		s[i] = s[length2];		//Place le caractère de la fin au début.
		s[length2--] = temp;	//Place le caractère du début à la fin et décrémente length2
	}
}
