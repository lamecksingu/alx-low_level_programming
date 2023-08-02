#include "lists.h"
/**
 * reverse_listint - a function to reverse a linked list
 * @head: a pointer to the head of the linked list
 * Return: a pointer to the first node of tyhe reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		/*store the next node temporarily*/
		listint_t *next = current->next;
		/*reverse the next pointer of the current node*/
		current->next = prev;
		/*move prev and current one step forwad*/
		prev = current;
		current = next;
	}
	/*update the head to point to the last node(new first node)*/
	*head = prev;
	return (*head);
}
