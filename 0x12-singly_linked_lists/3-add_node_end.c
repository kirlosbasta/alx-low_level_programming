#include "lists.h"

/**
 * add_node_end - Add str and it's length to a list
 * @head: The address of the head
 * @str: String to be added to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *current = *head;
	char *dup_str;

	if (node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = dup_str;
	node->len = _strlen(dup_str);
	if (current == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	return (node);
}

/**
 * _strlen - count the number of string
 * @s: pointer to string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
