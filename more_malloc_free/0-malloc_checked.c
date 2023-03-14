#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: value input.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);

	if (check == NULL)
		exit(98);

	return (check);
}
