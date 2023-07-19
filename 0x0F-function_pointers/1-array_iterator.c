#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a function that excecute a function
 * given as parameter on each element of an array
 * @array: the array itself
 * @size: size of the array
 * @action: function to be executes
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
