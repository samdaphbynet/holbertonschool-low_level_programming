#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: the numbers of input
 * Return: 0
 */

void print_square(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		if (size > 0)
		{
			_putchar('#');
		}
		else if (size == 0)
			_putchar('\n');
	}
	_putchar('\n');
}
