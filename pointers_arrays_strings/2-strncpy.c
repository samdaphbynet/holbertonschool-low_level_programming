#include "main.h"

/**
 * _strncpy - function should work exactly like strncpy.
 *@dest: Pointer to the destination array.
 *@src: It is a pointer to the source string.
 *@n: The first n character copied from src to dest.
 *Return: returns a pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if ((dest == NULL) && (src == NULL) && (n == 0))
		return (dest);

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
