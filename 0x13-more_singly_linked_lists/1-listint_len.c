#include "lists.h"
/**
 * listint_len - a function that return the number of elements
 * @h: a pointer to the elements
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
