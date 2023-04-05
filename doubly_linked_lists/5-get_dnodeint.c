#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * @head: the first node of struct
 * @index: is the index of the node, starting from 0
 * Return:  the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 1; i <= index && get != NULL; i++)
		get = get->next;
	return (get);
}
