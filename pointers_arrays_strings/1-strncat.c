#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Description: concatenates two strings, using n bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)	// Déclaration de la fonction _strncat qui prend trois paramètres :
												// - dest : pointeur vers la chaîne de destination
												// - src : pointeur vers la chaîne source
												// - n : nombre maximum de caractères à concaténer
												// La fonction renvoie un pointeur de type char*
{
	int i, j;	// Déclaration de deux variables entières i et j qui serviront d'indices

	i = 0;		// Initialisation des indices i et j à 0
	j = 0;		//

	while (dest[i] != '\0')		// Boucle while qui parcourt la chaîne dest jusqu'à trouver le caractère nul ('\0')
		i++;					// À la fin de cette boucle, i contient la longueur de dest
		
	while (src[j] != '\0' && j < n)		// Début d'une boucle while qui s'exécute tant que :
										// - On n'a pas atteint la fin de src (src[j] != '\0')
										// - ET on n'a pas copié n caractères (j < n)
	
	{						// Corps de la boucle :
		dest[i] = src[j];	// - Copie le caractère de src[j] vers dest[i]
		j++;				// - Incrémente j pour passer au caractère suivant de src
		i++;				// - Incrémente i pour passer à la position suivante dans dest
	}

	dest[i] = '\0';		// Ajoute le caractère nul à la fin de la chaîne dest après la concaténation

	return (dest);		// Retourne le pointeur vers la chaîne de destination modifiée
}
