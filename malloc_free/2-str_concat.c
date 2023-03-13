#include "main.h"

/**
 * str_concat - function that concatenates two string.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer should point to a newly allocated.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int size = len1 + len2;
	int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";

	str = malloc((sizeof(char) * size) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}

	return (str);
}
