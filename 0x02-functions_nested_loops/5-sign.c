#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: the number to be checked
 * Return: 1 and prints + for positive,
 * 0 and prints 0 for zero,
 * -1 and prints - if negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
