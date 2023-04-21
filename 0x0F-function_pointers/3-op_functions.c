#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - additional operation
 * @a: first operand
 * @b: second operand
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substitution operation
 * @a: first operand
 * @b: second operand
 * Return: difference of the two operand
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first operand
 * @b: second operand
 * Return: multiplied result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: first operand
 * @b: second operand
 * Return: dividend
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
 * op_mod - modulo operation
 * @a: first operand
 * @b: second operand
 * Return: remainder returned
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
