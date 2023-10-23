#include "lists.h"

/**
 * sum_listint - Get the sum of all element in a list
 * @head: Head of the list
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
