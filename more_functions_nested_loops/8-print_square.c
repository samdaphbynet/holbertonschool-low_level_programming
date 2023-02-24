#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: the numbers of input
 * Return: 0
 */

void print_square(int size)
{
	int i, a;

	a = 0;

	if (size < 1)
		_putchar('\n');

	while (a < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		a++;
	}
}
