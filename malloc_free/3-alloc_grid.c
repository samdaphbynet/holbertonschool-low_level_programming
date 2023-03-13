#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional.
 * @width: the width of array.
 * @height: the height of array.
 * Return:  returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int rows, columns;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (columns = 0; columns < height; columns++)
	{
		array[columns] = malloc(sizeof(int) * width);

		if (array[columns] == NULL)
		{
			for (rows = 0; rows < columns; rows++)
				free(array[rows]);

			free(array);
			return (NULL);
		}

		for (rows = 0; rows < width; rows++)
		{
			array[columns][rows] = 0;
		}
	}

	return (array);
}
