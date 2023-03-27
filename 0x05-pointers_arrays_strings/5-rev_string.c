#include "main.h"

/**
 * rev_string - prints in reverse
 * @s: pointer to a character
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	/*get lenth of a string*/
	while (s[len] != '\0')
	{
		len++;
	}
	/*swap characters from start to end*/
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
