#include "main.h"

/**
 * _puts_recursion - function that print a string.
 * @s: the String input.
 * Return: 0.
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i <= s[i]; i++)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
		}
	_putchar(s[i]);
	}

	_putchar('\n');
}
