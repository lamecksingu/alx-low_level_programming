#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function for multidimension array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int *) * width);
		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(ptr[x]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}
