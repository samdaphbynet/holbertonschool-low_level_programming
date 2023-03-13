#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated.
 * @str: the string input
 * Return: pointer to a newly allocated space in memory.
 */

char *_strdup(char *str)
{
	int i;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{}

	c = malloc(i * sizeof(char));

	if (c == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			c[i] = str[i];
		}

	}

	return (c);
}
