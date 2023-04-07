#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		binary <<= 1;
		binary += b[i] - '0';
		i++;
	}
	return (binary);
}
