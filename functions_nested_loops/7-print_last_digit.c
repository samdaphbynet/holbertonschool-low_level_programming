#include "main.h"

/**
 * print_last_digit -  function that checks for lowercase character.
 * @r: last digit input
 * Return: Returns 1 if c is lowercase or Returns 0 otherwise
 */

int print_last_digit(int r)
{
	int last;

	last = (r % 10);
		if (last < 0)
		{
			last = (-1 * last);
		}
		_putchar(last + '0');
		return (last);
}
