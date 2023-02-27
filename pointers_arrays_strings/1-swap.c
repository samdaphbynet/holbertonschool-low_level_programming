#include "main.h"

/**
 * swap_int -   function that swaps the values of two integers.
 * @a: integer one.
 * @b: integer two.
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swaps = *a;
		*a = *b;
		*b = swaps;
}
