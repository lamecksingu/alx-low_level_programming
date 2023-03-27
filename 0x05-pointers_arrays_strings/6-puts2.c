#include "main.h"

/**
 * puts2 - prints every other character
 * @str: The string where we print
 * every other character
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
