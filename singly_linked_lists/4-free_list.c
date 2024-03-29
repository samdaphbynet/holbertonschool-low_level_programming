#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the head to free
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free_list(head->next);
	free(head);
}
