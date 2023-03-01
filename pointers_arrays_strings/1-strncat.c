#include "main.h"

/**
 * _strncat - function that concatenates two string.
 * @dest: the string to concatenate
 * @src: string a concatenate to dest.
 * @n: the number of bytes from src.
 * Return: pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int b = 0;

	while (dest[i++])
	{
		b++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[b++] = src[i];
	}

	return (dest);
}
