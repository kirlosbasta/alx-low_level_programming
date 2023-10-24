#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: Head of the list
 *
 * Return: pointer to the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *post = NULL;
	listint_t *pre = NULL;

	while (*head != NULL)
	{
		post = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = post;
	}
	*head = pre;
	return (*head);
}
