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

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		exit (0);
	} else
	{
		*ptr = _putchar(c);
	}
	return (ptr);
}
