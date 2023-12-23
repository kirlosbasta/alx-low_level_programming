#include "hash_tables.h"

/**
 * shash_table_create - Create hash table with size @size
 * @size: Size of hash table
 *
 * Return: pointer o the table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	shash_node_t **arr = malloc(sizeof(shash_node_t *) * size);
	unsigned long int i;

	if (table == NULL)
	{
		return (NULL);
	}
	else if (arr == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	for (i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}
	table->array = arr;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - Add item to hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 in success 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *item;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (key[0] == '\0')
	{
		return (0);
	}
	item = screate_item(key, value);
	if (item == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = item;
		sorted_list(ht, item);
		return (1);
	}
	else if (ht->array[idx] != NULL)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = item->value;
			free(item->key);
			free(item);
			return (1);
		}
		else
		{
			sadd_node(&(ht->array[idx]), item);
			sorted_list(ht, item);
			return (1);
		}
	}
	return (0);
}

/**
 * screate_item - Create new item
 * @key: Key
 * @value: Value
 *
 * Return: pointer to item or NULL
 */

shash_node_t *screate_item(const char *key, const char *value)
{
	shash_node_t *item;
	char *key_cpy, *value_cpy;

	item = malloc(sizeof(shash_node_t));
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
	item->snext = NULL;
	item->sprev = NULL;
	return (item);
}

/**
 * sadd_node - add node to front of linked list
 * @head: Head of the list
 * @item: item to add
 *
 * Return: Nothing
 */

void sadd_node(shash_node_t **head, shash_node_t *item)
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

/**
 * sorted_list - Add @item to the sorted position according to ASCII
 * @ht: Hash table
 * @item: Item
 *
 * Return:Nothing
 */
void sorted_list(shash_table_t *ht, shash_node_t *item)
{
	shash_node_t *current;

	if (ht->shead == NULL)
	{
		ht->shead = item;
		ht->stail = item;
		item->snext = NULL;
		item->sprev = NULL;
	}
	else
	{
		current = ht->shead;
		while (current->snext)
		{
			if (strcmp(item->key, current->key) <= 0)
				break;
			current = current->snext;
		}
		if (current->sprev == NULL && strcmp(item->key, current->key) <= 0)
		{
			item->snext = current;
			item->sprev = NULL;
			current->sprev = item;
			ht->shead = item;
		}
		else if (current->snext == NULL)
		{
			item->snext = NULL;
			item->sprev = current;
			current->snext = item;
			ht->stail = item;
		}
		else
		{
			item->snext = current;
			item->sprev = current->sprev;
			current->sprev = item;
			item->sprev->snext = item;
		}
	}
}

/**
 * shash_table_get - get a value for key
 * @ht: pointer to the table
 * @key: Key
 *
 * Return: The value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *item;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	else if (strlen(key) == 0)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	item = ht->array[idx];
	if (item == NULL)
	{
		return (NULL);
	}
	else
	{
		while (item)
		{
			if (strcmp(item->key, key) == 0)
			{
				return (item->value);
			}
			else
			{
				item = item->next;
			}
		}
	}
	return (NULL);
}

/**
 * shash_table_print - print the content of ht
 * @ht: Hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int pr = 0;

	if (ht == NULL)
	{
		return;
	}
	current = ht->shead;
	putchar('{');
	while (current)
	{
		if (pr > 0)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);
		pr++;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the content of ht in reverse
 * @ht: Hash table
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int pr = 0;

	if (ht == NULL)
	{
		return;
	}
	current = ht->stail;
	putchar('{');
	while (current)
	{
		if (pr > 0)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);
		pr++;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delelte hash table
 * @ht: Hash table
 *
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp, *tmp2;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				tmp2 = tmp;
				tmp = tmp->next;
				sdelete_item(tmp2);
			}
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * sdelete_item - Free and delete the item and it's content
 * @item: Item
 *
 * Return: Nothing
 */

void sdelete_item(shash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
