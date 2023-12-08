#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - a function to print elements of a doubly linked list
 * @h: pointer to the elements in a structure
 * Return: Elements of a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

