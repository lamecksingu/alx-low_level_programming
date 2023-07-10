#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function to create an array of chars
 * @size: size of the array
 * @c: a character to initialize array
 * Return: an array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		exit(0);
	} else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
