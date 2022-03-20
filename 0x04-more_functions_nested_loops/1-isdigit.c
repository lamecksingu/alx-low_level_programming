#include "main.h"

/**
 * _isupper - checks for a digit between 0-9
 *
 * @c: interger to check digit
 *
 * Return: Always o (Success)
 */
int _isdigit(int c)
{
	if (c <= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
