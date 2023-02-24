#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the int for the paramater of my function.
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}

	else if (n == 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
