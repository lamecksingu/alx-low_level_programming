#include "main.h"

/**
 * reset_to_98 - a function to reset a variable's value to 98
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;

	*p = 98;
}
