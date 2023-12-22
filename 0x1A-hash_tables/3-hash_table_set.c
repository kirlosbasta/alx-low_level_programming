#include "hash_tables.h"

/**
 * hash_table_set - create new key value pair
 * @ht: Hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if in success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *item;

	if (key[0] == '\0')
	{
		return (0);
	}
	item = create_item(key, value);
	if (item == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = item;
		return (1);
	}
	else if (ht->array[idx] != NULL)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			ht->array[idx]->value = item->value;
			free(item->key);
			free(item);
			return (1);
		}
		else
		{
			add_node(&(ht->array[idx]), item);
			return (1);
		}
	}
	return (0);
}

/**
 * create_item - Create new item
 * @key: Key
 * @value: Value
 *
 * Return: pointer to item or NULL
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;
	char *key_cpy, *value_cpy;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	key_cpy = malloc(sizeof(char) * (strlen(key) + 1));
	if (key_cpy == NULL)
	{
		free(item);
		return (NULL);
	}
	value_cpy = malloc(sizeof(char) * (strlen(value) + 1));
	if (value_cpy == NULL)
	{
		free(item);
		free(key_cpy);
		return (NULL);
	}
	key_cpy = strcpy(key_cpy, key);
	value_cpy = strcpy(value_cpy, value);
	item->key = key_cpy;
	item->value = value_cpy;
	item->next = NULL;
	return (item);
}

/**
 * add_node - add node to front of linked list
 * @head: Head of the list
 * @item: item to add
 *
 * Return: Nothing
 */

void add_node(hash_node_t **head, hash_node_t *item)
{
	if (head == NULL)
	{
		*head = item;
	}
	else
	{
		item->next = *head;
		*head = item;
	}
}
