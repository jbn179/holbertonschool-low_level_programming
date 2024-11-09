#include "main.h"
#include <stdio.h>

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string to modify
 * Description:  capitalizes all words of a string.
 * Return: string
 */

char *cap_string(char *str)		// Déclaration de la fonction cap_string qui prend un paramètre :
								// - str : pointeur vers la chaîne de caractères à capitaliser
								// La fonction renvoie un pointeur vers une chaîne de caractères
{

int i = 0;		// Déclaration et initialisation d'une variable entière i à 0
				// Cette variable servira d'indice pour parcourir la chaîne str

char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',	// Déclaration et initialisation d'un tableau de caractères spéciaux
'"', '(', ')', '{', '}'};									// Ces caractères seront utilisés pour déterminer où capitaliser

	while (str[i] != '\0')		// Début d'une boucle while qui continue jusqu'à la fin de la chaîne str
	{
	int j = 0;		// Déclaration et initialisation d'une variable j à 0 pour chaque itération
					// Cette variable servira à parcourir le tableau spe

		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')	//
		{												// Si c'est le premier caractère de la chaîne (i == 0) et qu'il est minuscule,
			str[i] -= 32;								// on le convertit en majuscule en soustrayant 32 à sa valeur ASCII	
		}												//

	while (j < 13)		// Début d'une boucle while pour parcourir le tableau spe
	{
		if (str[i] == spe[j])		// Si le caractère actuel de str correspond à un caractère spécial dans spe
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')		//
			{												// Si le caractère suivant est une minuscule, on le convertit en majuscule
				str[i + 1] -= 32;							// Puis on sort de la boucle interne (break)
			}												// Sinon, on continue à parcourir spe
			break;											//
		}													//
		j++;												//
	}
	i++;		// On passe au caractère suivant de str
	}

return (str);		// Une fois tous les caractères traités, on retourne le pointeur vers la chaîne modifiée
}
