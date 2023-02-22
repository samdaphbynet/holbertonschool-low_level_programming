#include "main.h"

/**
 * jack_bauer -  that prints every minute of the day of Jack Bauer.
 * @n:  sign of a number input
 * Return: Returns 1 or 0 or -1 if n>0 or n==0 or n<0
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 42; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
