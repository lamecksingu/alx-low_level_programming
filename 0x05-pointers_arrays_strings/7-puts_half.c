#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: pointer to string to compute length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - print last half of a string
 * @str: pointer to the string to print its half
 */



void puts_half(char *str)
{
	int length = _strlen(str);
	int start = length / 2 || (length - 1) / 2;
	int i;

	if (length % 2 == 0)
	{
		start = length / 2;
	} else
	{
		start = (length - 1) / 2;
	}
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
