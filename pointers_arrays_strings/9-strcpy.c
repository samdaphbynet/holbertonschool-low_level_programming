#include "main.h"

/**
 * _strcpy - function that compies the string to by src to the buffer dest.
 * @src: string pointed.
 * @dest: the buffer pointed.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
