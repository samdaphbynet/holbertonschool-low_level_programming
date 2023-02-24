#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on th terminal.
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i >= n; i++)
		{
			_putchar(92);
		}
	}

	else if (n == 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
