#include "lists.h"

/**
 * list_len - Return the length of the list
 * @h: Pointer to the start of the list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
