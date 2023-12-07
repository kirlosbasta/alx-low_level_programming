#include "lists.h"

/**
 * dlistint_len - return the length of the list
 * @h: Head of the list
 *
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
