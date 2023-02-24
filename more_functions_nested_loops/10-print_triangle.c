#include "main.h"

/**
 * print_triangle -  function that prints a triangle
 * @size:  is the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}

			else if (j != size)
			{
				_putchar('\n');
			}

			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
