#include "lists.h"

/**
 * add_nodeint_end - Add a node to the end of a list
 * @head: The head of a list
 * @n: Element to add to the list
 *
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	current = *head;
	if (current == NULL)
	{
		node->n = n;
		node->next = NULL;
		*head = node;
		return (node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	node->n = n;
	node->next = NULL;
	current->next = node;
	return (node);
}
