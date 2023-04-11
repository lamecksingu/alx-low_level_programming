#include "main.h"
#include <stdlib.h>

int str_length(char *str);

/**
 * str_length - return length of a string
 * @str: the string itself
 * Return: length of a string
 */

int str_length(char *str)
{
	int length;

	/*treat NULL as an empty string*/
	if (str == NULL)
	{
		return (0);
	}
	length = 0;
	while (str[length] != '\0')
	{
		/*count characters*/
		length++;
	}
	return (length);
}
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	/*declare variables*/
	int len1, len2, i, j;
	char *concat;

	/*treat null as an empty string*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*get the length of s1 and s2*/
	len1 = str_length(s1);
	len2 = str_length(s2);

	/*allocate memory for the concatenated string*/
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	/*checks if memory allocated successfully*/
	if (concat == NULL)
	{
		return (NULL);
	}
	/*copy s1 and s2 to concatenated string*/
	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concat[i + j] = s2[j];
		j++;
	}
	/*add null terminator*/
	concat[i + j] = '\0';
	return (concat);
}
