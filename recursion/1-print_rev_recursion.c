#include "main.h"

/**
 * _print_rev_recursion - function that prints string reverse.
 * @s: the string input.
 * Return: 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
