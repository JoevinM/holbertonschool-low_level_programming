#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Description:
 * Iterates through the list and frees each node one by one.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{

		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
