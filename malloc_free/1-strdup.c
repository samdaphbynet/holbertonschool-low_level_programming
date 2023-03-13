#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated.
 * @str: the string input
 * Return: pointer to a newly allocated space in memory.
 */

char *_strdup(char *str)
{
	char *new = malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (str == 0)
	{
		return (NULL);
	}

	else
	{
		new = str;
	}

	return (new);
}
