#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t list.
 * @h: the first node pointed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		count++;
	}
	return (count);
}
