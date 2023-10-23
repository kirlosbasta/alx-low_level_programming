#include "lists.h"

/**
 * add_nodeint - Add a node the begging of a list
 * @head: The head of a list
 * @n: Element to add to the list
 *
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
