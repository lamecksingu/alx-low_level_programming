#include "main.h"
/**
 * factorial - a fuction to compute factorial of a given number
 * @n: inputed number
 * Return: factorial of a number
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
