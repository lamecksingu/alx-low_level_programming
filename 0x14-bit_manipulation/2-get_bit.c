#include "main.h"
/**
 * get_bit - a function that returns a bit at a given index
 * @n: the given number
 * @index: the place at which the bit is extracted
 * Return: the value of a bit at agiven index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/*check if the index is valiud*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /*index out of range*/
	}
	/*create a mask with 1 at the index position*/
	mask = 1UL << index;
	/*check if the bit at the index is set 1 and return 1 or 0*/
	return ((n & mask) != 0);
}
