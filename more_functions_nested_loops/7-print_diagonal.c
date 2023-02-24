#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on th terminal.
 * @n: The number of times to print diagonal lines
 * Return: 0
 */

void print_diagonal(int n)
{
	int a = 0, b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
