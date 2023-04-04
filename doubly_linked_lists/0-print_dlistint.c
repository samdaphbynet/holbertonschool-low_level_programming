#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t
 * @h: the head of struct
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
