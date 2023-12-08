#include "lists.h"
/**
 * insert_dnodeint_at_index - a function to insert a node at a specified index
 * @h: pointer to the list
 * @idx: index at which the node will be inserted
 * @n: data to be inserted
 * Return: address of the inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx > 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		idx--;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;

	return (new_node);
}
