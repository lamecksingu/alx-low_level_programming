#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array
 * @size: size of array elements
 * Return: pointer to a memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
		/*return NULL if nmemb or size is 0*/
		return (NULL);
	}
	/*calculate memory size*/
	total_size = nmemb * size;
	/*allocate memory using malloc*/
	result = malloc(nmemb * size);
	/*Return NULL if memory allocation fails*/
	if (result == NULL)
	{
		return (NULL);
	}
	/*set the allocated memory to 0*/
	memset(result, 0, total_size);
	return (result);
}
