#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key
 * @size: is the size of array of the hash table
 * Return: the index at which the key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);

	return (value % size);
}
