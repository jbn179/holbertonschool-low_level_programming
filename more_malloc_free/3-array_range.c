#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Description: function that creates an array of integers.
 * Return: the pointer to the newly created array
 * if min > max, return NULL if malloc fails, return NULL
*/

int *array_range(int min, int max)		// Définition de la fonction array_range qui prend deux entiers comme paramètres et retourne un pointeur vers un entier.
{
	int *arr;			// Déclare un pointeur pour stocker l'adresse du tableau à créer.
	int i, size;		// Déclare des variables pour l'itération et la taille du tableau.

	if (min > max)			// Si min est supérieur à max, retourne NULL car la plage n'est pas valide.
		return (NULL);		//

	size = max - min + 1;		// Calcule la taille du tableau (nombre d'entiers dans la plage, inclusif).

	arr = malloc(sizeof(int) * size);		// Alloue de la mémoire pour le tableau.
	if (arr == NULL)						//
		return (NULL);						// Si l'allocation échoue, retourne NULL.

	for (i = 0; i < size; i++)		// Remplit le tableau avec les valeurs de la plage, de min à max.
		arr[i] = min + i;			//

	return (arr);		// Retourne le pointeur vers le tableau nouvellement créé.
}
