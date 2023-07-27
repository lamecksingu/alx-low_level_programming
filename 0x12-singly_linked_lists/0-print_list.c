#include "lists.h"
#include <stdlib.h>
/**
 * print_list - a function that prints all the elements of a list_t
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;/*keep track of the number of nodes*/
	const list_t *current = h;/*start with the head of the linked list*/

	while (current != NULL)
	{
		/*print the string in the current node*/
		if (current->str != NULL)
		{
			printf("[%u] %s\n", current->len, current->str);
		} else
		{
			printf("[0] (nil)\n");
		}

		/*move to the next node*/
		current = current->next;

		count++;/*increment node count*/
	}
	/*printf("-> %u elements\n", count);*/
	return (count);
}
