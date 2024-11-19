#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Description: function that searches for an integer.
 * Return: index of the first element for which cmp doesn't return 0,
 *         or -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))		// Déclaration de la fonction int_index avec trois paramètres :
															// - array : un pointeur vers un tableau d'entiers
															// - size : le nombre d'éléments dans le tableau
															// - cmp : un pointeur vers une fonction qui prend un int comme argument et retourne un int
{
	int i;		// Déclaration de la variable i de type int, qui sera utilisée comme compteur dans la boucle

	if (array == NULL || cmp == NULL || size <= 0)		// Vérification des conditions d'erreur :
		return (-1);									// Si le tableau est NULL, ou la fonction de comparaison est NULL, ou la taille est <= 0,
														// la fonction retourne immédiatement -1 (indiquant qu'aucun élément n'a été trouvé)

	for (i = 0; i < size; i++)			// Début de la boucle for qui itère sur chaque élément du tableau
	{
		if (cmp(array[i]) != 0)			// Pour chaque élément, la fonction cmp est appelée avec l'élément actuel.
			return (i);					// Si cmp retourne une valeur non nulle (ce qui indique généralement une correspondance),
	}									// la fonction int_index retourne immédiatement l'index actuel i.

	return (-1);		// Si la boucle se termine sans trouver de correspondance, la fonction retourne -1.
}
