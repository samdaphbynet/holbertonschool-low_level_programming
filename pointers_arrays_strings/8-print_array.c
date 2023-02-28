#include "main.h"

/**
 * print_array - function that print 'n' element of array.
 * @a: array
 * @n: elements of an array.
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
