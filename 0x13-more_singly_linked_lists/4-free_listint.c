#include "lists.h"
/**
 * free_listint - a function that frees listint_t
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;/*store current node in a temporary variable*/
		/*move to the next node before freeing the current*/
		head = head->next;
		free(temp);/*free the memory of the current node*/
	}
}
