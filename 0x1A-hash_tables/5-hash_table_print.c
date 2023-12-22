#include "hash_tables.h"

/**
 * hash_table_print - print the content of ht
 * @ht: Hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, pr = 0;
	hash_node_t **arr, *tmp;

	if (ht == NULL)
	{
		return;
	}
	arr = ht->array;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (arr[i] != NULL)
		{
			tmp = arr[i];
			while (tmp)
			{
				if (pr > 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				pr++;
			}
		}
	}
	printf("}\n");
}
