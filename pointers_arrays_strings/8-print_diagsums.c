#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals.
 * @a: the array input.
 * @size: the number input.
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int result1 = 0;
	int result2 = 0;
	int sum = (size * size);

	for (i = 0; i <= sum; i = i + size + 1)
	{
		result1 = result1 + a[i];
	}

	for (j = 0; j <= sum - size; j = j + size  - 1)
	{
		result2 = result2 + a[j];
	}

	printf("%d, %d\n", result1, result2);
}
