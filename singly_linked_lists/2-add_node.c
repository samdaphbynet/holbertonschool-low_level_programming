#include "lists.h"

/**
 * my_strlen - function behave like strlen
 * @str: the string input
 * Return: the number of characters
 */

size_t my_strlen(const char *str)
{
	unsigned int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * add_node -  function that adds a new node at the beginning of a list_t
 * @head: the new head added
 * @str: the new string added
 * Return: new node added
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
