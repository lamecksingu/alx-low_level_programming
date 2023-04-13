#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function to allocate memory
 * @b: size to be allocated
 * Return: return allocated memory pointer
 */

void *malloc_checked(unsigned int b)
{
	/*allocate memory using malloc*/
	void *ptr = malloc(b);

	/*check if Malloc failed*/
	if (ptr == NULL)
	{
		/*terminate process with status value 98*/
		exit(98);
	}
	return (ptr);
}
