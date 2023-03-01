#include "main.h"

/**
 * reverse_array - function that reverse the content of an string
 *@a: array to reverse.
 *@n: n is the number of elements of the array.
 *Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
