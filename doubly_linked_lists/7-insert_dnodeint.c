#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts a new node at a given position.
 * @h: the pointer to the first element of struct
 * @idx:  is the index of the list where the new node should be added
 * @n: the new node to added
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}
	temp = *h;

	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->prev = temp;
	
	if (temp != NULL)
		temp->next->prev = new;
	temp->next = new;
	return (new);
}
