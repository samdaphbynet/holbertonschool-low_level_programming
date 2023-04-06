#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n).
 * @head: the first node of struct
 * Return: returns the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
