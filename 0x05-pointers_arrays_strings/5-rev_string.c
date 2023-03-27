#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: pointer to a character
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	/*get lenth of a string*/
	while (s[len] != '\0')
	{
		len++;
	}
	/*print string in revese*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	/*print new line*/
	_putchar('\n');
}
