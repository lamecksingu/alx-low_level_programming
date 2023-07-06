#include "main.h"
#include <stddef.h>
/**
 * wildcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if the strings can be considered identical
 * otherwise returns 0
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
