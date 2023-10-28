#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);/*right shift to extract the next bit*/
	}
	_putchar((n & 1) ? '1' : '0');/*print the least significant bit*/
}
