#include "lists.h"
/**
 * free_listint2 - free listint_t and set the head to NULL
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	/*set the head to NULL to indicate the list is empty*/
	*head = NULL;
}
