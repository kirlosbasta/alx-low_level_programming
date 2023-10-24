#include "lists.h"

/**
 * insert_nodeint_at_index - Add a node to the given index
 * @head: pointer to the head of the list
 * @idx: The index to add the node at
 * @n: The number that need to be added
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int i, len = 0;

	/*Get the length of the list*/
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	/*Check if it's possible to add a node at that index*/
	if (idx > len)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	/*Travel to the node index*/
	tmp = *head;
	if (idx == 0)
	{
	node->n = n;
	node->next = tmp;
	*head = node;
	return (node);	
	}
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	node->n = n;
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
