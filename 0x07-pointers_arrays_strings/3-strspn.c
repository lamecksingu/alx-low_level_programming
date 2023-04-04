#include "main.h"

/**
 * _strspn - a function to return a set of bytes
 * @s: source string
 * @accept: Accepted string
 *
 * Return: return bytes from accepted string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, m = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				m++;
			}
			j++;
		}
		i++;
	}
	return (m);
}
