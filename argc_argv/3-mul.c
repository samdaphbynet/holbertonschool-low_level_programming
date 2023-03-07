#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: gives the number of command line items.
 * @argv: contains the name of the command.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		res = res * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", res);

	return (0);
}
