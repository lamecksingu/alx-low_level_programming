#include "main.h"

int mysqrt(int a, int b);

/**
 * mysqrt - it's mysqrt about square root
 * @a: same as n
 * @b: sum
 * Return: the result
 */
int mysqrt(int a, int b)
{
	if (a == (b * b))
	{
		return (b);
	} else if ((b * b) >= a)
	{
		return (-1);
	}
	return (mysqrt(a, b + 1));
}
/**
 * _sqrt_recursion - the og function
 * @n: the number to be computed its square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (mysqrt(n, 0));
}
