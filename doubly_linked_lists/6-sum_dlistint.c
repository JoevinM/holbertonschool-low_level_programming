#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list.
 *         If the list is empty, returns 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (-1);

		i += head->n;
		head = head->next;
	}
	return (i);
}
