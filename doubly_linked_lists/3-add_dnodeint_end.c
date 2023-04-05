#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * @head: the first element
 * @n: the number to prints
 * Return:  the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *current = *head;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = temp;
	temp->prev = current;
	return (temp);
}
