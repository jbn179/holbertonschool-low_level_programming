#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * Description: concatenates two strings.
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)	//La fonction prend deux paramètres :	//dest : pointeur vers la chaîne de destination
{																				//src : pointeur vers la chaîne source à ajouter
	int i, j;							//Elle retourne un pointeur vers la chaîne de destination modifiée

	i = 0;
	j = 0;

	while (dest[i] != '\0')	//Cette boucle parcourt dest jusqu'à trouver le caractère nul de fin de chaîne
		i++;				//À la fin, i contient l'index du caractère nul de dest

	while (src[j] != '\0')	//Cette boucle parcourt chaque caractère de src
	{
		dest[i] = src[j];	//Copie le caractère de src à la fin de dest; de la droite vers la gauche
		j++;	//Avance les deux compteurs
		i++;	//
	}

	dest[i] = '\0'; //Ajoute le caractère nul à la fin de la chaîne concaténée

	return (dest);
}
