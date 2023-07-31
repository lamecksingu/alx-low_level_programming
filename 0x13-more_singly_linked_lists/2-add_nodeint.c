#include "lists.h"
/**
 * add_nodeint - adds a node at the beggining of a listint_t
 * @head: head of the nodes
 * @n: member of the list
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*allocate memory for the new node*/
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	/*checks if memory allocation was successfull*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*set the value of the new node to the given integer*/
	new_node->n = n;
	/*make the 'next' pointer point to the current head*/
	new_node->next = *head;
	/*update head to point to the new node*/
	*head = new_node;
	/*return the address of the new node*/
	return (new_node);
}
