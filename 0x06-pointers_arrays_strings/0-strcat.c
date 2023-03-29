#include "main.h"

/**
 * _strcat - a function to concatenate
 * two strings
 * @dest: A destination string
 * @src: source string
 *
 * Return: A pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
