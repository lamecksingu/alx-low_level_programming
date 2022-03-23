#include "main.h"

/**
 * _strcat - a fuction to concatenate strings
 *
 * @dest: a destination variable
 * @src: a source variable
 *
 * @i: Interger for iteration
 * @j: interger for iteration
 *
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
