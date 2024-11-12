#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid function.
 * @grid: grid to free
 * @height: height of the grid
 * Description: frees a 2 dimensional grid created by your alloc_grid function.
*/

void free_grid(int **grid, int height)
{
	int i;		// Déclaration d'une variable entière pour l'itération dans la boucle.

	if (grid == NULL || height <= 0)		// Vérification si la grille est NULL ou si la hauteur est inférieure ou égale à 0.
	{
		return;		// Si l'une des conditions est vraie, on sort de la fonction sans faire d'autres opérations.
	}

	for (i = 0; i < height; i++)		// Boucle pour libérer chaque ligne de la grille.
	{
		free(grid[i]);		// Libération de la mémoire allouée pour chaque ligne de la grille.
	}

	free(grid);		// Libération de la mémoire allouée pour le tableau de pointeurs lui-même.
}
