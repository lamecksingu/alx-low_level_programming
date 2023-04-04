#include "main.h"

/**
 * _memset - sets the memory with a constant
 * byte up to n values
 *
 * @s: pointer to the memory address
 * @b: The constant byte to be filled
 * @n: the number of bytes to be filled
 *
 * Return: Character filled in memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
