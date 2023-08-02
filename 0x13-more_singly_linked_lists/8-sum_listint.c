#include "lists.h"
/**
 * sum_listint - return the sum of all the data of listint_t
 * @head: pointer to the head of the list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
