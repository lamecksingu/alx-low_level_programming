#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint_t
 * @head: pointer to the head of the list
 * @index: nth index required
 * Return: the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			/*found the node at the specified index return it*/
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
