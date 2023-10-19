#include "lists.h"

/**
 * add_node - Add str and it's length to a list
 * @head: The address of the head
 * @str: String to be added to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	char *dup_str;

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);
	node->str = dup_str;
	node->len = _strlen(dup_str);
	node->next = *head;
	*head = node;
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
