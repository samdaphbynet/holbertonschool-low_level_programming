#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of input.
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}

	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
