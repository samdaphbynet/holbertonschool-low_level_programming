#include "main.h"

/**
 * puts2 - function that print other character of string.
 * @str: the string of input.
 * Return: 0.
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	printf("\n");
}
