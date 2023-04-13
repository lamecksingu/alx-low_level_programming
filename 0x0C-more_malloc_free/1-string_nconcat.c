#include "main.h"
#include <stdlib.h>

unsigned int length(char *str);

/**
 * length - calculates the length of a string
 * @str: a pointer to a string
 * Return: length of a string
 */

unsigned int length(char *str)
{
	unsigned int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}


/**
 * string_nconcat - concatenate two strings up to n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from the second string
 * Return: a concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*declare variables*/
	unsigned int i, len1, len2;
	char *result;

	/*Treat NULL as an empty string*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*get length of s1 and s2*/
	len1 = length(s1);
	len2 = length(s2);
	/*use entire s2 if n is greater or equal to its length*/
	if (n >= len2)
	{
		n = len2;
	}
	/*allocate memory fo concatenated string*/
	result = malloc(len1 + n + 1);
	/*return NULL if memory allocation fails*/

	if (result == NULL)
	{
		return (NULL);
	}
	/*copy s1 to result*/
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	/*copy first n bytes of s2 to result*/
	for (i = 0; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}
	/*Null terminate the concatenated string*/
	result[len1 + n] = '\0';
	return (result);
}
