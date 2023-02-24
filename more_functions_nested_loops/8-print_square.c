#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: the numbers of input
 * Return: 0
 */

void print_square(int size)
{
	int i = 0;
	int a = 0;

	if (size < 1)
	{
		_putchar('\n');

		while (i < size)
		{
			while (a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
}
