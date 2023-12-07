#include "lists.h"

/**
 * add_dnodeint - Add a node to beginning of a list
 * @head: Head of the list
 * @n: inger to add
 *
 * Return: pointer to the new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = (int) n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
