#include "main.h"

/**
 * _islower -  function that checks for lowercase character.
 * @c: single letter input
 * Return: Returns 1 if c is lowercase or Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
