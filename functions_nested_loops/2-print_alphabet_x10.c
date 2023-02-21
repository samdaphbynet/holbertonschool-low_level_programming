#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	int x10 = 0;
		while (x10++ <= 9)
		{
			for (i = 'a'; i <= 'z'; ++i)
				_putchar(i);
			_putchar('\n');
		}
}
