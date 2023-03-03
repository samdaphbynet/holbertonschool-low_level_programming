#include "main.h"

/**
 * _strchr - function that locates a chracter in string.
 * @s: string input.
 * @c: the occurrence of the character.
 * Return: pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int b;

	while (s[i])
	{
		i++;
	}

	for (b = 0; b <= i; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
