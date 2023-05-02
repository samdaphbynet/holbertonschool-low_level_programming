#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
