#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of input
 * @size: size of array
 * @cmp: function that execute search in array
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
