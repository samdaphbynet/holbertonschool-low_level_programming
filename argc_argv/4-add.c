#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that adds positive numbers.
 * @argc: gives the number of command line items.
 * @argv: contains the name of the command.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int s;
	char *b;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			b = argv[i];
				for (s = 0; s < strlen(b); s++)
				{
					if (b[s] < 48 || b[s] > 57)
					{
						printf("Error\n");
						return (1);
					}
				}
		}
	}

	while (argc != 0)
	{
		sum += atoi(*argv++);
		argc--;
	}
	printf("%d", sum);

	return (0);
}
