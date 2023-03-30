#include "main.h"

/**
 * string_toupper - a function to convert char
 * to uppercase
 * @str: the string to convert
 *
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = (*ptr - 'a') + 'A';
		}
		ptr++;
	}
	return (str);
}
