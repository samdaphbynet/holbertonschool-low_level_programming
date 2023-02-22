#include "main.h"

/**
 * print_last_digit -  function that checks for lowercase character.
 * @r: last digit input
 * Return: Returns 1 if c is lowercase or Returns 0 otherwise
 */

int print_last_digit(int r)
{
	if (r <= 0 && r >= 0)
		_putchar((r % 10) + '0');

	return ((r % 10));
}
