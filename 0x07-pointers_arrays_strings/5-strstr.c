#include "main.h"

/**
 * _strstr - a function to locate a substring
 * @haystack: thye string to search into
 * @needle: the string to find
 *
 * Return: the string found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
