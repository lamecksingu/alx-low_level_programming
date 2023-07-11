#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees 2D array
 * @grid: 2D array
 * @height: height dimension of a grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
