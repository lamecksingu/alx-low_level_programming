#include "main.h"
/**
 * flip_bits -  a function to check how many bits will be flipped
 * to get another number
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip to get the other number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*XOR the two numbers*/
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;/*check the least significant bit*/
		xor_result >>= 1;/*right shift to check the next bit*/
	}
	return (count);
}
