#include "main.h"

/**
 * _sqrt_recursion - function that returns square root of a number.
 * @n: the number input.
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrtNatural(n, 1));
}

/**
 * _sqrtNatural - calculate natural square root of a number.
 * @n: the number input.
 * @i: the counter of natural square.
 * Return: the natural square root of a number.
 */

int _sqrtNatural(int n, int i)
{
	int r = i * i;

	if (r > n)
		return (-1);

	if (r == n)
		return (i);

	return (_sqrtNatural(n, i + 1));
}
