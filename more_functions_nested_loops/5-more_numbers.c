#include "main.h"

/**
 * more_numbers -  function that print 10 times th numbers from 0 to 14.
 * haut = height and larg = width.
 * Return: 10 times numbers 0 to 14.
 */

void more_numbers(void)
{
	int haut, larg;

	while (haut <= 10)
	{
		_putchar((haut % 10) + '0');
		haut++;

		for (larg = 0; larg <= 14; larg++)
		{
			_putchar((larg % 10) + '0');
		}
	}
	_putchar('\n');
}
