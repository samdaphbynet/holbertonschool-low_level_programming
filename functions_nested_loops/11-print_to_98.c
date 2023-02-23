#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: the number to print.
 * @ni: counter of bocle.
 * Return:  all natural numbers from n to 98.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
