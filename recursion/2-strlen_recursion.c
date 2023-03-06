#include "main.h"

/**
 * _strlen_recursion - function that returns the lenght of a string.
 * @s: the string input.
 * Return: the lenght of a string.
 */

int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
