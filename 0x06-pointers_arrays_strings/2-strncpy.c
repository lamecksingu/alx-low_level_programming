#include "main.h"

/**
 * _strncpy - copies the src string to dest
 * @dest: pointer to a destination string
 * @src: pointer to the source string
 * @n: maximum bytes to copy
 *
 * Return: destination string after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
