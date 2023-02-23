#include "main.h"

/**
 * more_numbers -  function that print 10 times th numbers from 0 to 14.
 * haut = height and larg = width.
 * Return: 0.
 */

void more_numbers(void)
{
	int haut = 0;
	int larg = 0;

	while (haut < 10)
	{
		while (larg <= 14)
		{
			if (larg > 9)
				_putchar((larg / 10) + '0');
			_putchar((larg % 10) + '0');
			larg++;
		}
		_putchar('\n');
		haut = 0;
		haut++;
	}
}
