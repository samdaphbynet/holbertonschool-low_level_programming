#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index.
 * @head: adress the pointer of first element
 * @index: the element to deletes
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;

	if (*head == NULL)
		return (-1);
	current = *head;
	prev = NULL;

	while (current != NULL && index > 0)
	{
		prev = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
		return (-1);
	if (prev != NULL)
		prev->next = current->next;
	else
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = prev;
	free(current);
	return (1);
}
