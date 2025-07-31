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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *h;

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
		if (idx == 0)
			new_node = add_dnodeint(&temp, n);
		if (temp->next == NULL && i == (idx - 1))
			new_node = add_dnodeint_end(&temp, n);
		if (i == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
		}
		else
			return (NULL);
	}
	return (new_node);
}
