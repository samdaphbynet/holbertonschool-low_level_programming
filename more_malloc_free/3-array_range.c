#include "main.h"

/**
 * array_range - function that create an array of integers.
 * @min: min of array input
 * @max: max of array input
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int count;
	int size;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		array[count] = min++;

	return (array);
}
