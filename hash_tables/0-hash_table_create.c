#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	free(table);
	return (table);
}
