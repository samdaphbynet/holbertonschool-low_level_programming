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

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
