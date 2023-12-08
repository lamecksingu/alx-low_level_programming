#include "lists.h"
/**
 * delete_dnodeint_at_index - a function to delete node at a specified index
 * @head: a pointer to the list
 * @index: specific index to delete at
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (index > 0)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
