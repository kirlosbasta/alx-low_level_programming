#include "hash_tables.h"

/**
 * hash_table_get - get a value for key
 * @ht: pointer to the table
 * @key: Key
 *
 * Return: The value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *item;

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
