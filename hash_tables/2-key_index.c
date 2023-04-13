#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key
 * @size: is the size of array of the hash table
 * Return: the index at which the key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	const unsigned char *table;
	unsigned long int i;

	table = key;

	for (i = 0; i < size; i++)
	{
		if (table[i] == '\0')
			break;
	}
	return (i);
}
