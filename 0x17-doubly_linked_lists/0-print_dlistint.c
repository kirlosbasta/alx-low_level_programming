#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: Head of the double list
 *
 * Return: The length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (len);
}