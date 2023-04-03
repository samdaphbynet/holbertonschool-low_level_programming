#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: the new head added
 * @str: the new string added
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;

	end_node = malloc(sizeof(list_t));

	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
		temp = end_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
	}
	return (*head);
}
