#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: Size of the table
 *
 * Return: pointer to the table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **arr = malloc(sizeof(hash_node_t *) * size);
	long unsigned int i;

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
	return (table);
}

