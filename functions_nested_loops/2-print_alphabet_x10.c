#include "main.h"

/**
* print_alphabet_x10: (-  that prints the alphabet x10 in lowercase)?
* @parameterx: description of parameter void
* Description: function that prints the alphabet x10
* section header: main.h
*/

void print_alphabet_x10(void)
{
	int i;
		for (i = 'a'; i <= 'z'; ++i)
		{
			while (i <= 10)
			{
			_putchar(i);
			i++;
			}	
		}
		_putchar('\n');
}
