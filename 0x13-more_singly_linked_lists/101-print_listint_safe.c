#include "lists.h"
/**
 * print_listint_safe - a function that prints listint_t linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	/*create an array to store addresses of visted nodes*/
	const listint_t *visited[1024] = {NULL};

	while (current != NULL)
	{
		size_t i;

		/*check if the current node addresses exists in the visited array*/
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("->[%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}
		/*add the current node to the visited array*/
		visited[count++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		/*move to the next node*/
		current = current->next;
	}
	return (count);
}
