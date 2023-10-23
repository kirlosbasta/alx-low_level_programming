#include "lists.h"

/**
 * print_listint - print the element of a list
 * @h: the head of the list
 *
 * Return: NUmber of node
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
