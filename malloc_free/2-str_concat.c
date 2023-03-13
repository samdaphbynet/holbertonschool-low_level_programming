#include "main.h"

/**
 * str_concat - function that concatenates two string.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer should point to a newly allocated.
 */

char *str_concat(char *s1, char *s2)
{
	int str1, str2 = 0;
	char *res;

	if (s1 == NULL)
	{
		return (s2);
	}

	if (s2 == NULL)
	{
		return (s1);
	}

	res = malloc(strlen(s1) + strlen(s2) + 1);

	if (res == 0)
	{
		return (NULL);
	}

	for (str1 = 0; (res[str2] = s1[str1]) != '\0'; str1++, str2++)
	{}

	for (str1 = 0; (res[str2] = s2[str1]) != '\0'; str1++, str2++)
	{}

	return (res);

}
