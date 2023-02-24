#include "main.h"

/**
 * more_numbers -  function that print 10 times th numbers from 0 to 14.
 * i = height and n = width.
 * Return: 0.
 */

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	while (i < 10)
	{
		while (n <= 14)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		i++;
		n = 0;
		_putchar('\n');
	}
}
