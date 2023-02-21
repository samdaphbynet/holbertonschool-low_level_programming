#include "main.h"

/**
 * print_sign -  function that prints the sign of a number.
 * @n:  sign of a number input
 * Return: Returns 1 or 0 or -1 if n>0 or n==0 or n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
