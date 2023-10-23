#include "lists.h"

/**
 * pop_listint - Remove the first elemnt of a list
 * @head: Head of the list
 *
 * Return: First number of the list
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	num = tmp->n;
	*head = (**head).next;
	free(tmp);
	return (num);
}
