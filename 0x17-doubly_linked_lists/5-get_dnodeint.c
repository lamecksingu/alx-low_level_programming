#include "lists.h"
/**
 * get_dnodeint_at_index - a function to get node at a given index
 * @head: pointer to the dlistint
 * @index: index of the node starting from 0
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
