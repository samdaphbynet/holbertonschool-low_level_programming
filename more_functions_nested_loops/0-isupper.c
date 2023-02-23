#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: letter input
 * Return: 1 if c is uppercase, 0 therwise.
 */

int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
