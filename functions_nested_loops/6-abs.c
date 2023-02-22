#include "main.h"

/**
 * _abs -   function that computes the absolute value of an integer.
 * @c: absolute value
 * Return: value of an integer.
 */

int _abs(int c)
{
	return (c + ((c > 0) - (c < 0)));
}
