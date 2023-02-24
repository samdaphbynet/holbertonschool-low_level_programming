#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on th terminal.
 * @n: The number of times to print diagonal lines
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (n > 0)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
