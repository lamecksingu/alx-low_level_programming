#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create array
 * @size: Size of the array
 * @c: the array of characters
 * Return: a pointer to array of character
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
