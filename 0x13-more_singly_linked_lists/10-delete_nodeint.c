#include "lists.h"
/**
 * delete_nodeint_at_index - a function to delete node at a specified index
 * @head: pointer to the head node
 * @index: index of the node we need to delete
 * Return: returns 1 if it succees, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		/*delete the first node*/
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/*Traverse to the node at the specified index or the end of the list*/
	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		/*specified index is out of range, deletion failed*/
		return (-1);
	}

	/*delete the node at a specified index*/
	prev->next = current->next;
	free(current);
	return (1);
}
