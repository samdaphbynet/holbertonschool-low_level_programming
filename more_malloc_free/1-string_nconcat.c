#include "main.h"

/**
 * string_nconcat - function that concatenates two string.
 * @s1: first string input
 * @s2: second string input
 * @n: bytes input
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len = n;
	char *dep;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	dep = malloc(sizeof(char) * (len + 1));

	if (dep == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		dep[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		dep[len++] = s2[i];

	dep[len] = '\0';

	return (dep);
}
