#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes.
 * @size: size of input
 * @c: char input
 * Return: pointer to the array, or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *tab = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			tab[i] = c;
		}
	}

	return (tab);
}
