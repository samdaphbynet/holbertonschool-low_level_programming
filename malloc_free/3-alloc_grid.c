#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional.
 * @width: the width of array.
 * @height: the height of array.
 * Return:  returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	array = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);

	free(array);
}
