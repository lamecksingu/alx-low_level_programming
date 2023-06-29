#include "main.h"

int helper_sqrt(int n, int i);

/**
 * _sqrt_recursion - a function that returns
 * the square root of a natural number
 * @n: number
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_sqrt(n, 0));
}

/**
 * helper_sqrt - recurse to find the natura square root of a number
 * @n: a number to calculate the square root
 * @i: iterator
 * Return: resulting square root
 */

int helper_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (helper_sqrt(n, i + 1));
}
