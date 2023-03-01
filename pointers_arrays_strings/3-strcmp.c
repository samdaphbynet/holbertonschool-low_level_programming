#include "main.h"

/**
 * _strcmp - function should  work exactly like strcmp()
 *@s1: the first string
 *@s2: the last string
 *Return: returns 0, otherwise, it returns a non-zero value
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);

	else
		return (*s1 - *s2);
}
