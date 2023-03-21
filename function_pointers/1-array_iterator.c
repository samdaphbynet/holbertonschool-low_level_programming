#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @action: the function execute a function
 * @array: array of input
 * @size: size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
