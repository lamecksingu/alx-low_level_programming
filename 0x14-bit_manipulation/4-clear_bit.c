#include "main.h"
/**
 * clear_bit - a function to set a bit to 0 at aspecified index
 * @n: given number
 * @index: the index
 * Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*create a mask with 0 at the index position*/
	unsigned long int mask = ~(1UL << index);

	/*check validity of index*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*clear the bit at index by performing bitwise AND operation with the mask*/
	*n = *n & mask;
	return (1);/*operation was successful*/
}
