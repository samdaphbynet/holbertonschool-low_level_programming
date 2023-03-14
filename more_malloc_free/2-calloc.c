#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: the array of input
 * @size: the size of array input.
 * Return: returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	arr = array;

	for (i = 0; i < (size * nmemb); i++)
		arr[i] = '\0';

	return (array);
}
