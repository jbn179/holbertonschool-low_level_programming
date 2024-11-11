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
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
