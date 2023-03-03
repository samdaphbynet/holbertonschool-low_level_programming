#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area dest.
 * @src: memory area src.
 * @n: number bytes.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		i++;
	}

	return (dest);
}
