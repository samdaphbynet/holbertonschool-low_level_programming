#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint
 * @head: the double pointer
 * @n: the elements to prints
 * Return: the pointer to new dlistint
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
