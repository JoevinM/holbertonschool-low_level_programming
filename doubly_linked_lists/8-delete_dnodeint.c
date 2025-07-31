#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a
 *                            doubly linked list.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to delete (starting at 0).
 *
 * Return: 1 on success, -1 if the index is invalid or the list is empty.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}

