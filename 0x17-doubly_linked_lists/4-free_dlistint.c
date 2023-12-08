#include "lists.h"
/**
 * free_dlistint - a function that frees the list dlistint_t
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
