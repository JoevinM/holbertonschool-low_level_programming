#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                            in a doubly linked list.
 * @h: Double pointer to the head of the list.
 * @idx: Index at which the new node should be inserted (starting at 0).
 * @n: Value to assign to the new node.
 *
 * Return: Address of the new node on success, or NULL on failure
 *         (e.g. if malloc fails or index is out of bounds).
 *
 * Description:
 * The function inserts a new node containing the integer `n`
 * at the specified index `idx`. If `idx` is 0, the node is inserted
 * at the beginning of the list. If `idx` is equal to the number of
 * elements in the list, the node is inserted at the end.
 * If `idx` is greater than the number of nodes, the function returns NULL.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *temp;

	if (*h == NULL)
		return (NULL);

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL && i == (idx - 1))
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;


	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;


	return (new_node);
}
