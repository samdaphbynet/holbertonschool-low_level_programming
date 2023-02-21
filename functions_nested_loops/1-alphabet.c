#include "main.h"

/**
* print_alphabet: (-  that prints the alphabet, in lowercase)?
* @parameterx: description of parameter void
* Description: function that prints the alphabet, in lowercase
* section header: main.h
*/


/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
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
