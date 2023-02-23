#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: the number to print.
 * @ni: counter of bocle.
 * Return:  all natural numbers from n to 98.
 */

void print_to_98(int n)
{
	int i;

		if (n <= 98)
		{
			for (i = n; i <= 98; i++)
			{
				printf(", %d", i);
			}
		}
		else if (n >=0)
		{
			for (i = n; i >= 0; i--)
			{
				printf(", %d", i);
			}
		}
		_putchar('\n');
}
