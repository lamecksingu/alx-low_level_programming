#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - a function to cmpute the number of elements
 * @h: pointer to elements in a structure
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
