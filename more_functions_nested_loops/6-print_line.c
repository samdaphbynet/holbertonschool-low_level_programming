#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: The number of times the '\' char is printed.
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
			a = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
