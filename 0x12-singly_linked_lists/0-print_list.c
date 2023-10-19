#include "lists.h"

/**
 * print_list - print a linked list
 * @h: pointer to the header
 *
 * Return: the length of the linked list
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
		counter++;
	}
	return (counter);
}

