#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string to be searched
 * @c: character to search for
 * Description: locates a character in a string.
 * Return: a pointer to the first occurrence of char c in the string s, or NULL
*/

char *_strchr(char *s, char c)		// Déclaration de la fonction _strchr qui prend deux paramètres :
									// - s : pointeur vers la chaîne de caractères dans laquelle chercher
									// - c : le caractère à rechercher
									// La fonction renvoie un pointeur vers char
{

	int i = 0;		// Déclaration et initialisation d'une variable entière i à 0
					// Cette variable servira d'indice pour parcourir la chaîne s

	while (s[i] != '\0')		// Début d'une boucle while qui continue jusqu'à ce qu'on atteigne le caractère nul ('\0') marquant la fin de la chaîne
	{
		if (s[i] == c)		// Vérifie si le caractère actuel de la chaîne est égal au caractère recherché c

		{						// Si le caractère est trouvé, on retourne un pointeur vers sa position dans la chaîne
			return (s + i);		// s + i est l'adresse du caractère trouvé
		}
		i++;		// Si le caractère n'est pas trouvé, on passe au caractère suivant de la chaîne
	}

	return (NULL);		// Si on sort de la boucle sans avoir trouvé le caractère,
						// cela signifie qu'il n'est pas présent dans la chaîne
						// Dans ce cas, on retourne NULL
}
