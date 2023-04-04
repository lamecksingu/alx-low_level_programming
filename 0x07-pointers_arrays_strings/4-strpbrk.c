#include "main.h"

/**
 * _strpbrk - a function to search for a set of bytes
 *
 * @s: source string
 * @accept: accepted characters
 *
 * Return: return the string found accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
