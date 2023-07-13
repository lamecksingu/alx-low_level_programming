#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function to allocate memory using malloc
 * @b: the type of value to be stored in the allocated memory
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
