#include "main.h"

/**
 * isupper - checks if a character is an uppercas
 * @c: a character to be checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if ( c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
