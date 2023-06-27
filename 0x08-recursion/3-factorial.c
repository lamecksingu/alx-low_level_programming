#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: the number to be computed it's factorial
 * Return: returns the factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
