#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: the number from which we get the indexes
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n = (*n) | (1UL << index);
	return (1);
}
