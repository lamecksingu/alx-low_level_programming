#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index starting from 0 of the bit you want
 * Return: value of the bit index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);/*index out of range*/
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
