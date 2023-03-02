#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string input
 * Return: pointed.
*/

char *leet(char *s)
{
	char *ptr = s;
	int i = 0;
	char lett[] = {'a', 'e', 'o', 't', 'l'};
	char repl[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == lett[i] || *s == lett[i] - 32)
			{
				*s = repl[i] + '0';
			}
		}
		s++;
	}

	return (ptr);
}
