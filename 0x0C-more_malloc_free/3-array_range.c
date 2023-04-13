#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array in between min and max
 * @min: minimum integer
 * @max: maximum integer
 * Return: a pointer to a newly created array
 */

int *array_range(int min, int max)
{
	/*declare variables*/
	int size, i;
	int *arr;

	/*check if min > max*/
	if (min > max)
	{
		return (NULL);
	}
	/*calculate the size of array*/
	size = max - min + 1;
	/*allocate memory for the array*/
	arr = malloc(size * sizeof(int));
	/*check if malloc failed*/
	if (arr == NULL)
	{
		return (NULL);
	}
	/*populate array with values from min to max*/
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
