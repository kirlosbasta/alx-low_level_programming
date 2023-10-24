#include "lists.h"

/**
 * delete_nodeint_at_index - As the name suggest
 * @head: Head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 in succes and -1 in failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp;
	unsigned int i, len = 0;

	/*Get the length of the list*/
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	/*Check if it's possible to delete a node at that index*/
	if (index >= len)
	{
		return (-1);
	}
	/*delete at index 0*/
	tmp = *head;
	if (index == 0)
	{
		temp = tmp->next;
		free(tmp);
		*head = temp;
		return (1);
	}
	/*Travel to the index need to be deleted*/
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	temp = tmp->next;
	tmp = *head;
	/*Travel to the previous index to be deleted*/
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	free(tmp->next);
	tmp->next = temp;
	return (1);
}
