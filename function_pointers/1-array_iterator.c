#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Description: executes a function given as a parameter
 * on each element of an array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))		// Déclaration de la fonction array_iterator avec trois paramètres :
																		// - array : un pointeur vers un tableau d'entiers
																		// - size : la taille du tableau (de type size_t pour la compatibilité avec différentes architectures)
																		// - action : un pointeur vers une fonction qui prend un int comme argument et ne retourne rien (void)
{
	size_t i;		// Déclaration de la variable i de type size_t, qui sera utilisée comme compteur dans la boucle

	if (array != NULL && action != NULL)		// Vérification de sécurité : s'assure que ni le pointeur array ni le pointeur de fonction action ne sont NULL.
												// C'est une bonne pratique pour éviter les erreurs de segmentation.
	{
		for (i = 0; i < size; i++)		// Boucle for qui itère sur chaque élément du tableau.
										// Elle commence à 0 et continue tant que i est inférieur à size.

			action(array[i]);		// Pour chaque élément du tableau, cette ligne appelle la fonction pointée par action,
									// en lui passant l'élément actuel du tableau comme argument.
	}
}
