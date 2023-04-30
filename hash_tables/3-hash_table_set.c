#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || key == NULL || value == NULL) {
		return (-1);
	}

	i = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL) {
		return (-1);
	}

	node->key = strdup(key);
	if (node->key == NULL) {
		free(node);
		return (-1);
	}

	node->value = strdup(value);
	if (node->value == NULL) {
		free(node->key);
		free(node);
		return (-1);
	}

	node->next = ht->array[i];
	ht->array[i] = node;

	return (1);
}

