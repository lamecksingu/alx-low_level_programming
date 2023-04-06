#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - return if number is prime
 * @n: the number to be checked
 *
 * Return: Value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if a number is prime
 * @n: the number to be checked
 * @i: the iteration
 *
 * Return: Return 1 if prime found, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
