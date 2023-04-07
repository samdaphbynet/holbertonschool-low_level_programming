#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number of input
 * @index: the index of the bit we want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int init;
	int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	init = 1ul << index;
	value = (n & init) >> index;
	return (value);
}
