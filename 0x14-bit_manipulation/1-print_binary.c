#include "main.h"
/**
 * print_binary - converts int to binary
 * @n: integer to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (size - 1);
	int leading_zeros = 1;/*to skip leadingzeros*/
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		if ((n & mask) || !leading_zeros)
		{
			leading_zeros = 0;
			printf("%c", (n & mask) ? '1' : '0');
		}
		mask >>= 1;
	}
	/*in case the number was zero*/
	if (leading_zeros)
	{
		printf("0");
	}
}
