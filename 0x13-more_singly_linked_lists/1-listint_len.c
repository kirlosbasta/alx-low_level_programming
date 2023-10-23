#include "lists.h"

/**
 * listint_len - Return the number of element in a list
 * @h: The head of a list
 *
 * Return: Number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
