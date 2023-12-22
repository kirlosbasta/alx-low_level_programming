#include "hash_tables.h"

/**
 * hash_table_delete - Delelte hash table
 * @ht: Hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *tmp2;

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
				delete_item(tmp2);
			}
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * delete_item - Free and delete the item and it's content
 * @item: Item
 *
 * Return: Nothing
 */

void delete_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
