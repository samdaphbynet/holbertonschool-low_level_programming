#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string input.
 * @needle: string input.
 * Return: pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}

		if (b != i)
			haystack++;

		else
			return (haystack);
	}

	return (NULL);
}
