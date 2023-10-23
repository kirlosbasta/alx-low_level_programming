#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list
 * @head: Head of the list
 * @index: The index of the node to get
 *
 * Return: That node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len;

	len = listint_len(head);
	if (index >= len)
		return (0);
	for (i = 0; i < index; i++) 
	{
		head = head->next;
	}
	return (head);
}

/**
 * listint_len - Return the number of element in a list
 * @h: The head of a list
 *
 * Return: Number of element
 */
/*
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}*/
