#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long integer
 * @index: the index of the bit we want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int init;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	init = 1ul << index;
	*n |= init;
	return (1);
}
