#include "main.h"

/**
 * print_sign -  function that prints the sign of a number.
 * @n:  sign of a number input
 * Return: Returns 1 or 0 or -1 if n>0 or n==0 or n<0
 */

void times_table(void)
{
	int i, j;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j < 10; j++)
			{
				_putchar((i * j) + '0');

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
}
