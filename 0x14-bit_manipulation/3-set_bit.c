#include "main.h"
/**
 * set_bit - a function that sets a bit to 1 at a given index
 * @n: given number
 * @index: the index at which the bit will be set
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*create a mask with 1 at the index position*/
	unsigned long int mask = 1UL << index;

	/*check validity of index*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*set a bit at the index to 1 using a bitwise OR operation*/
	*n |= mask;
	return (1);/*operation was successful*/
}
