#include "main.h"

/**
 * _strspn - function that gets the string of prefix substring.
 * @s: string input.
 * @accept: prefix substring.
 * Return: initial segement.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, b;
	int value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[i] == accept[b])
					value++;
			}
		}
		else
			return (value);
	}

	return (value);
}
