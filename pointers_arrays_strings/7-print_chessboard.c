#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: the row of the array
 * Return: 0.
 */

void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8 ; i++)
	{
		for (b = 0; b < 8; b++)
		{
			if (b == 7)
			{
				putchar(a[i][b]);
				putchar('\n');
			}

			else
				putchar(a[i][b]);
		}
	}
}
