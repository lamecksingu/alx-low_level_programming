#include "main.h"

/**
 * swap_int - Swap the values of two intergers
 *
 * @a: variable a
 * @b: variable b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
