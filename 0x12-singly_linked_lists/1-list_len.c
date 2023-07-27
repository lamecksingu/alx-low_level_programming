#include "lists.h"
/**
 * list_len - a function that return a number of elements in a linked list
 * @h: pointer to the list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;/*go to the next node*/
		count++;/*increment count to count the elements*/
	}
	return (count);
}
