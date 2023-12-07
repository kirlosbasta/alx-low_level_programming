#include "lists.h"

/**
 * insert_dnodeint_at_index - Add a node a index
 * @h: head of the list
 * @idx: index
 * @n: number to add
 *
 * Return: pointer to new node or null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int index = 0;

	if (node == NULL)
	{
		return (NULL);
	}
	if (*h == NULL && idx > 0)
	{
		free(node);
		return (NULL);
	}
	while (index < idx && current->next != NULL)
	{
		current = current->next;
		index++;
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	node->n = n;
	node->next = current;
	if (index == idx && current != NULL)
	{
		node->prev = current->prev;
		node->prev->next = node;
		current->prev = node;
		return (node);
	}
	if (current->next == NULL && index + 1 == idx)
	{
		node->next = current->next;
		current->next = node;
		node->prev = current;
		return (node);
	}
	free(node);
	return (NULL);
}
