#include "lists.h"

/**
 * sum_dlistint - sum all integer in list
 * @head: Head of the list
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
