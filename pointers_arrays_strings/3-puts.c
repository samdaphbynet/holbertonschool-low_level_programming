#include "main.h"

/**
 * _puts - function that prints a string, to stdout.
 * @str: string to prints.
 * Return: 0
 */

void _puts(char *str)
{
	_putchar('\n');
	fputs(str, stdout);
}
