#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a certain index
 * @head: pointer to the head of a list
 * @idx: indext to insert at
 * @n: data to be inserted
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *current = *head;

	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		/*insert at the beggining*/
		new_node->next = *head;
		*head = new_node;
	} else
	{
		count = 0;
		/*traverse the node before the desired position*/
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL)
		{
			/*it is not possible to add the new node at the specified index*/
			free(new_node);
			return (NULL);
		}

		/*insert the new node at the specified index*/
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
