#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: the head of struct
 * Return: the number of elements in a linked
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *lenght = h;
	size_t count = 0;

	while (lenght != NULL)
	{
		lenght = lenght->next;
		count++;
	}
	return (count);
}
