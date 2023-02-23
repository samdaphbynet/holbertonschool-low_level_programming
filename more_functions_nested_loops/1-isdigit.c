#include "main.h"

/**
 * _isdigit -  function that checks for lowercase character.
 * @c: number or letter input
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
