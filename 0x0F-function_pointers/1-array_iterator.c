#include "function_pointers.h"

/**
 * array_iterator - a function to iterate through the array
 * @size: size of the array
 * @array: array to be printed
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
