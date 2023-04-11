#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a given string
 * @str: given string
 * Return: return a pointer to a duplicate
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup;

	/*checks if input string is null*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*Gets length of input string*/
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	/*allocate memory for duplicate*/
	dup = malloc((len + 1) * sizeof(char));
	/*checks if memory allocation was a success*/
	if (dup == NULL)
	{
		return (NULL);
	}
	/*copy the input string*/
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
