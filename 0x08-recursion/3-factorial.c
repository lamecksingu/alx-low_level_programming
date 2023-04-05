#include "main.h"

/**
 * factorial - a functio to compute factorial
 * @n: A number to compute its factorial
 *
 * Return: Return factorial of a number given
 */

int factorial(int n)
{
	int m;

	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	m = n * factorial(n - 1);
	return (m);
}
