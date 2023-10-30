#include "main.h"
/**
 * get_endianness -  a function to get endianess
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)(*byte));
}
