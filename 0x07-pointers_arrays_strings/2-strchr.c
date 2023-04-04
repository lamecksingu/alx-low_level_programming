#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: Source string
 * @c: Character to be found
 *
 * Return: located character
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
