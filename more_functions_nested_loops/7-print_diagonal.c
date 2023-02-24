#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on th terminal.
 * @n: The number of times to print diagonal lines
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				if (n == 0)
					_putchar('\n');
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar(92);
			_putchar('\n');
		}
	}
}
