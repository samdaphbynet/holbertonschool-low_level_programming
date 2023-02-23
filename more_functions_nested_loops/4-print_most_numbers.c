#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9.
 * @void: parametre of function
 * Return: print the numbers not 2 and 4.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
