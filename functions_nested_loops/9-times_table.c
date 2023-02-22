#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0.
 * @: haut = height, larg = width, multi = multiplication.
 * Return: multiplication of 9 times table.
 */

void times_table(void)
{
	int haut, larg, multi;

		for (haut = 0; haut <= 9; ++haut)
		{
			for (larg = 0; larg <= 9; ++larg)
			{
				multi = (haut * larg);

				if ((multi / 10) > 0)
				{
					_putchar((multi / 10) + '0');
				}				
				else if (larg > 0)
				{
					_putchar(' ');
				}
				_putchar((multi % 10) + '0');

				if (larg < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
