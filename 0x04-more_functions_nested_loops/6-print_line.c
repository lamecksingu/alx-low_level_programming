#include "main.h"

/**
 * print_line - prints a line
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
