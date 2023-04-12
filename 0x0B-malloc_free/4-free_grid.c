#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory allocated by alloc_grid
 * @grid: the grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	/*do nothing if grid is null*/
	if (grid == NULL)
	{
		return;
	}
	/*free memory for each row*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/*free memory for the array of pointers to row*/
	free(grid);
}
