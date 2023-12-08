#include "lists.h"
/**
 * sum_dlistint - sum all the data of dlistint
 * @head: pointer to dlistint
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
