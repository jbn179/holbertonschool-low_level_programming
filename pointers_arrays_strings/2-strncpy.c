#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Description: copies a string from src to dest
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)	// Déclaration de la fonction _strncpy qui prend trois paramètres :
												// - dest : pointeur vers la chaîne de destination
												// - src : pointeur vers la chaîne source
												// - n : nombre maximum de caractères à copier
												// La fonction renvoie un pointeur de type char*
{

	int i;		// Déclaration d'une variable entière i qui servira d'indice

	i = 0;		// Initialisation de l'indice i à 0

	while (src[i] != '\0' && i < n)		// Début d'une boucle while qui s'exécute tant que :
										// - On n'a pas atteint la fin de src (src[i] != '\0')
										// - ET on n'a pas copié n caractères (i < n)

	{							// Corps de la boucle :
		dest[i] = src[i];		// - Copie le caractère de src[i] vers dest[i]
		i++;					// - Incrémente i pour passer au caractère suivant
	}

	while (i < n)		// Début d'une seconde boucle while qui s'exécute tant que i est inférieur à n
						// Cette boucle s'assure que si la copie de src est terminée et qu'il reste de l'espace dans dest,
						// on remplit le reste avec des caractères nuls

	{						// Corps de la seconde boucle :
		dest[i] = '\0';		// - Remplit les positions restantes de dest avec des caractères nuls
		i++;				// - Incrémente i
	}

	return (dest);		// Retourne le pointeur vers la chaîne de destination modifiée
}
