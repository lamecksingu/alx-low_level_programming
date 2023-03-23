#include "main.h"

/**
 * _isupper - checks if a character is an uppercas
 * @c: a character to be checked
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
