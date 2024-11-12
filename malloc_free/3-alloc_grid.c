#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Description: returns a pointer to a 2 dimensional array of integers.
 * Return: pointer to the 2D array, or NULL on failure
*/

int **alloc_grid(int width, int height)		// Déclaration de la fonction alloc_grid
    										// Prend deux paramètres : width et height (dimensions de la grille)
    										// Retourne un pointeur vers un tableau de pointeurs d'entiers (grille 2D)
{
					// Déclaration des variables locales :
	int **grid;		// grid : pointeur vers un tableau de pointeurs d'entiers (la grille 2D)
	int i, j;		// i, j : variables de boucle pour l'allocation et l'initialisation

	if (width <= 0 || height <= 0)		// Vérification si les dimensions sont valides (positives et non nulles)
	{
		return (NULL);		// Si non, retourne NULL
	}
												// Allocation dynamique de mémoire pour le tableau de pointeurs
	grid = malloc(sizeof(int *) * height);		// Alloue 'height' fois la taille d'un pointeur vers int

	if (grid == NULL)		// Vérification si l'allocation a réussi
	{
		return (NULL);		// Si malloc a échoué, on retourne NULL
	}

	for (i = 0; i < height; i++)					// Boucle pour allouer de la mémoire pour chaque ligne de la grille
	{												//
		grid[i] = malloc(sizeof(int) * width);		// Alloue 'width' fois la taille d'un int pour chaque ligne

		if (grid[i] == NULL)		// Vérification si l'allocation de la ligne a réussi
		{
			return (NULL);		// Si malloc a échoué, on retourne NULL
								// Note : Il y a un problème ici, car on ne libère pas la mémoire déjà allouée
		}

		for (j = 0; j < width; j++)		// Boucle pour initialiser chaque élément de la ligne à 0
		{								//
			grid[i][j] = 0;				// Initialisation de tous les éléments de la ligne à 0
		}								//

	}
	return (grid);		// Retourne le pointeur vers la grille 2D allouée et initialisée
}
