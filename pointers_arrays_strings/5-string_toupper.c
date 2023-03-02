#include "main.h"

/**
 * string_toupper - function that changes all letters of a string to uppercase.
 * @str: the string to change to uppercase.
 * Return: 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
