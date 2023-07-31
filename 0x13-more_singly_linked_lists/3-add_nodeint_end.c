#include "lists.h"
/**
 * add_nodeint_end - a fu ction to add a node at the end of the list
 * @head: pointer to the head of the list
 * @n: given number to insert into the list
 * Return: address of the new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/*if the list is empty make the new node the head*/
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		/*Traverse the list to find the last node*/
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		/*link the last node to the new node*/
		current->next = new_node;
	}
	return (new_node);
}
