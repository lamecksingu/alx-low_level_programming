#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 * Return: 0 Always Success
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
