#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: the numbers of input
 * Return: 0
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');

			if (size == 0)
				_putchar('\n');
		}
		_putchar('\n');
	}
}
