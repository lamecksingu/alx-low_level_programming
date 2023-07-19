#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - a function  to add integers
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function to substract two int
 * @a: first int
 * @b: second int
 * Return: difference between two int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function to multiply two int
 * @a: first int
 * @b: second int
 * Return: product of two int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function to divide two int
 * @a: first int
 * @b: second int
 * Return: quotient of the two int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a function that finds the modulo of two int
 * @a: first int
 * @b: second int
 * Return: remainder/modulo of two int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
