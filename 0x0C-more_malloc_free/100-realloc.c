#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate memory previous allocated
 * @ptr: pointer to the previous memory allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	/*if new_size is 0 equivalent to free(ptr)*/
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/*if ptr is NULL, equivalent to malloc(new_size)*/
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/*if new_size is equal to old_size, do nothing and return ptr*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	/*allocate memory for the new block*/
	new_ptr = malloc(new_size);
	/*if malloc fails return NULL and do not modify ptr*/
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/*copy contents from old block to new block*/
	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	/*free old block*/
	free(ptr);
	/*return the new ptr to the newly allocated block*/
	return (new_ptr);
}
