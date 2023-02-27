#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: string in reverse.
 * Return: 0.
 */

void print_rev(char *s)
{
	int leng = strlen(s);
	int g;

	for (g = leng - 1; g >= 0; g--)
		printf("%c", s[g]);
}
