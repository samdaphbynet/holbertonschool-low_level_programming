#include "lists.h"

/**
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free(head->next);
	free(head->prev);
	free(head);
}
