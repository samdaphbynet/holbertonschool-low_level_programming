#include "main.h"

/**
 * jack_bauer -  that prints every minute of the day of Jack Bauer.
 * hour = hour, min = minute
 * Return:  every minute of the day, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
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
