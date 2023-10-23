#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: Head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (**head).next;
		free(tmp);
	}
	*head = NULL;
}
