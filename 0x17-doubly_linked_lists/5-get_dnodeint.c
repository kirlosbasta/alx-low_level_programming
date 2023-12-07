#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: Head of the list
 * @index: index
 *
 * Return: poiter to the node at index or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int idx = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL && idx < index)
	{
		current = current->next;
		idx++;
	}
	return (current);
}
