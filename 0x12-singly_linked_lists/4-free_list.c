#include "lists.h"

/**
 * free_list - free the allocated memory of a linked list
 * @head: Pointer to the first node in a list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
