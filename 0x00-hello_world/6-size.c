#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("The size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of float: %lu byte(s)\n", (unsigned long)sizeof(f);
	return (0);
}
