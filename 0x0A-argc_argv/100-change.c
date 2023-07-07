#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * calculate_minimum_coins - as the name says
 * @cents: number of cents
 * Return: minimum number of coins
 */
int calculate_minimum_coins(int cents)
{
	int denomination[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	long unsigned int i;

	if (cents < 0)
	{
		return (0);
	}

	for (i = 0; i < sizeof(denomination) / sizeof(denomination[0]); i++)
	{
		num_coins += cents / denomination[i];
		cents %= denomination[i];
	}
	return (num_coins);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int min_coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	min_coins = calculate_minimum_coins(cents);
	printf("%d\n", min_coins);
	return (0);
}
