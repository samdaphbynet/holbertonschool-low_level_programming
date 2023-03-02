#include "main.h"

/**
 * cap_string - function that capiltalizes worlds of string.
 * @str: the string to capitalizes.
 * Return: parametre.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}

		if (str[i] == ' ' || str[i] == '-' || str[i] == '\n' || str[i] == '\t')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			continue;
			}
		}

		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + 32;
		}
	}

	return (str);
}
