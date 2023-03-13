#include "main.h"

/**
 * str_concat - function that concatenates two string.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer should point to a newly allocated.
 */

char *str_concat(char *s1, char *s2)
{
	int count = 0;
	int count2 = 0; 
	int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";

	while (s1[count] != '\0')
	{
		count++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	count2++;
	str = malloc(sizeof(char) * (count + count2));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < count2; j++)
	{
		str[i + j] = s2[j];
	}

	return (str);
}
