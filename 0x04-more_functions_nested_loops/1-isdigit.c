#include "main.h"

/**
 * _isdigit - checks through for a digit
 * @c: the checked character
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	} else if (c <= 48 && c >= 57)
	{
		return (0);
	}
	return (0);
}
