#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: End the main function
 */
int main(void)
{
	int i;
	char l;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
