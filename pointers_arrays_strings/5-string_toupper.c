#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to modify
 * Description: changes all lowercase letters of a string to uppercase.
 * Return: string
 */

char *string_toupper(char *str)		// Déclaration de la fonction string_toupper qui prend un paramètre :
									// - str : pointeur vers la chaîne de caractères à convertir en majuscules
									// La fonction renvoie un pointeur vers une chaîne de caractères
{

	int i = 0;		// Déclaration et initialisation d'une variable entière i à 0
					// Cette variable servira d'indice pour parcourir la chaîne

	while (str[i] != '\0')		// Début d'une boucle while qui continue jusqu'à ce qu'on atteigne
								// le caractère nul ('\0') marquant la fin de la chaîne
	{
		if (str[i] >= 'a' && str[i] <= 'z')	// Vérifie si le caractère actuel est une lettre minuscule
											// Les lettres minuscules en ASCII sont comprises entre 'a' (97) et 'z' (122)
		
		{								// Si le caractère est une minuscule, on le convertit en majuscule
			str[i] = str[i] - 32;		// En ASCII, la différence entre une lettre minuscule et sa majuscule est de 32
		}								// Donc, soustraire 32 convertit une minuscule en majuscule

		i++;		// Incrémente i pour passer au caractère suivant de la chaîne
	}
	return (str);	// Une fois tous les caractères traités, on retourne le pointeur vers la chaîne modifiée (maintenant en majuscules)

}
