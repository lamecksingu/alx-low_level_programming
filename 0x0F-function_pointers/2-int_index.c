#include "function_pointers.h"

/**
 * int_index - a function to search for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: integer found after search
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
