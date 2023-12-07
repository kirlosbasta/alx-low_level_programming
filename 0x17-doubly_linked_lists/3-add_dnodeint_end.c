#include "lists.h"

/**
 * add_dnodeint_end - Add a node to the end of a list
 * @head: Head of the list
 * @n: integer to add
 * 
 * Return: pointer to new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = (int) n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	node->prev = current;
	current->next = node;
	return (node);
}
