#include "main.h"

/**
 * puts_half - function that  prints half of a string.
 * @str: string input.
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half_len = len / 2;
	int n = (len % 2 == 0) ? half_len : half_len;

	for (i = len - n; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}
