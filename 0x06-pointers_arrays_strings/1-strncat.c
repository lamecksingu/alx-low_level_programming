#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes
 *
 * Return: Destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	/*Fid the end of the destination string*/
	int i;
	char *p = dest;

	while (*p != 0)
	{
		p++;
	}
	/*Append the source string to the destination string*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*p++ = src[i];
	}
	/*Add null terminator*/
	*p = '\0';
	/*return concatenated string*/
	return (dest);
}
