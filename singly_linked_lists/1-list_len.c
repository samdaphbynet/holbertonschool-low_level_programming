#include "lists.h"

/**
 * list_len -  function that returns the number of elements in a linked.
 * @h: head of struct
 * Return: the number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
