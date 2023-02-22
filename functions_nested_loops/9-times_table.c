#include "main.h"

/**
 * print_sign -  function that prints the sign of a number.
 * @n:  sign of a number input
 * Return: Returns 1 or 0 or -1 if n>0 or n==0 or n<0
 */

void times_table(void)
{
	int haut, larg, multi;

		for (haut = 0; haut <= 9; ++haut)
		{
			for (larg = 0; larg <= 9; ++larg)
			{
				multi = (haut * larg);
				if ((multi / 10 ) > 0)
				{
					_putchar((multi / 10) + '0');
				}
				
				else
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
