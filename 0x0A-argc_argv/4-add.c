#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * add - a function to add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: total
 */

int add(int argc, char *argv[])
{
	int total = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	return (total);
}

/**
 * main - entry point
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc <= 1)
	{
		printf("0\n");
	} else
	{
		result = add(argc, argv);
		if (result == 1)
		{
			return (1);
		}
		printf("%d\n", result);
	}
	return (0);
}
