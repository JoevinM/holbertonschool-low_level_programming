#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @n: Integer value to store in the new node.
 *
 * Return: Address of the new node, or NULL if memory allocation fails.
 *
 * Description:
 * - Allocates a new node and sets its value.
 * - If the list is empty, the new node becomes the head.
 * - Otherwise, traverses to the last node and appends the new node.
 * - Updates the previous pointer of the new node to link it properly.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;


	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	return (new);
}
