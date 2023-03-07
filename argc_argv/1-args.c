#include <stdio.h>

/**
 * main - program that prints the number of arguments passed.
 * @argc: gives the number of command line items.
 * @argv: contains the name of the command.
 * Return: 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
