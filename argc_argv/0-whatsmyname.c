#include <stdio.h>

/**
 * main - program that prints its name.
 * @argc: gives the number of command line items.
 * @argv: contains the name of the command.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
