#include "main.h"

/**
 * _strpbrk - function that searches a string for any of set of bytes.
 * @s: string input.
 * @accept: the searche input.
 * Return: pointer to the byte in string.
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}

	return (NULL);
}
