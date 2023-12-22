#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int idx;

    ht = hash_table_create(1024);
	idx = key_index((const unsigned char *)"betty", ht->size);
    hash_table_set(ht, "betty", "cool");
	printf("Key: %s Value: %s\n", ht->array[idx]->key, ht->array[idx]->value);
	hash_table_set(ht, "betty", "not cool");
	printf("Key: %s Value: %s\n", ht->array[idx]->key, ht->array[idx]->value);
	idx = key_index((const unsigned char *)"hetairas", ht->size);
    hash_table_set(ht, "hetairas", "cool");
	printf("Key: %s Value: %s\n", ht->array[idx]->key, ht->array[idx]->value);
	idx = key_index((const unsigned char *)"mentioner", ht->size);
    hash_table_set(ht, "mentioner", "cool");
	printf("Key: %s Value: %s\n", ht->array[idx]->key, ht->array[idx]->value);
    return (EXIT_SUCCESS);
}