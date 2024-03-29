#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: bytes to be copied
 *
 * Return: Memory area copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
