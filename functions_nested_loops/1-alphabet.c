#include "main.h"

/**
 * _putchar - it's function in file _putchar.c
 * description: 'function print_alphabet  that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	int i;
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
}
