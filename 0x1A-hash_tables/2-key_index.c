#include "hash_tables.h"

/**
 * key_index - Get the hash for the hash table
 * @key: pointer to the key
 * @size: Size of the table
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
