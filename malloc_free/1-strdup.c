#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string given as parameter
 * Description: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Return: if success, returns a pointer to the duplicated string,
 * returns NULL if insufficient memory was available,
 * returns NULL if str = NULL
*/

char *_strdup(char *str)		// Déclaration de la fonction _strdup
    							// Prend un paramètre str (la chaîne à dupliquer)
    							// Retourne un pointeur vers char (la nouvelle chaîne dupliquée)
{
								// Déclaration des variables locales :
	char *dup;					// dup : pointeur qui contiendra l'adresse de la chaîne dupliquée
	unsigned int length, i;		// length : pour stocker la longueur de la chaîne d'origine
								// i : variable de boucle pour la copie des caractères

	if (str == NULL)		// Vérification si la chaîne d'entrée est NULL
	{
		return (NULL);		// Si oui, retourne NULL (pas de duplication possible)
	}

	for (length = 0; str[length] ; length++)		// Boucle pour calculer la longueur de la chaîne d'entrée
	{
		;		// Incrémente length jusqu'à rencontrer le caractère nul '\0'
	}

	dup = malloc(sizeof(char) * (length + 1));		// Allocation dynamique de mémoire pour la nouvelle chaîne
    												// Alloue (length + 1) fois la taille d'un char (pour inclure le '\0')

	if (dup == NULL)		// Vérification si l'allocation a réussi
	{
		return (NULL);		// Si malloc a échoué (retourne NULL), on retourne NULL
	}

	for (i = 0; i <= length; i++)		// Boucle pour copier chaque caractère de str dans dup
	{									// Inclut le caractère nul '\0' (d'où i <= length)
		dup[i] = str[i];				//
	}									//

	return (dup);		// Retourne le pointeur vers la nouvelle chaîne dupliquée
}
