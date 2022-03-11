#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;

	printf("The size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of float: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
