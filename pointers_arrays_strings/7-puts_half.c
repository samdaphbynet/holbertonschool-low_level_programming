#include "main.h"

/**
 * puts_half - function that  prints half of a string.
 * @str: string input.
 * Return: 0
 */

void puts_half(char *str)
{
	int i, len, half_len;

	len = strlen(str);
	half_len = len / 2;

	for (i = half_len; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}
