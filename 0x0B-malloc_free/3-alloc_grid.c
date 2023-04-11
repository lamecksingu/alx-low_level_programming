#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimension array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/*return null if w/h is 0 or -ve*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*allocate memory for rows*/
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	/*allocate memory for each row and initialize to 0*/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/*free memory allocated so far on failure*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			/*initialize each element to 0*/
			grid[i][j] = 0;
		}
	}
	return (grid);
}
