#include "main.h"

/**
* print_alphabet_x10: (-  that prints the alphabet x10 in lowercase)?
* @parameterx: description of parameter void
* Description: function that prints the alphabet x10
* section header: main.h
*/

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i;
	int x10 = 0;
		while (x10++ <= 10)
		{
			for (i = 'a'; i <= 'z'; ++i)
				_putchar(i);
			_putchar('\n');
		}
}
