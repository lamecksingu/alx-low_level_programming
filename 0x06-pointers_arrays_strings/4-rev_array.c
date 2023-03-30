#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function to reverse array
 * of integers
 * @a: the array to be reversed
 * @n: Size of array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
