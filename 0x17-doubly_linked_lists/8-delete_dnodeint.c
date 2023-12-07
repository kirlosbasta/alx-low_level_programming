#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: Head of the list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int idx = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	while (current != NULL && idx < index)
	{
		idx++;
		current = current->next;
	}
	if (current != NULL)
	{
		if (current->prev == NULL)
		{
			*head = current->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(current);
			return (1);
		}
		else if (current->next == NULL)
		{
			current->prev->next = NULL;
			free(current);
			return (1);
		}
		else
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
	}
	return (-1);
}
