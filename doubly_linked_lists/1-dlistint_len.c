#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Constant pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 *
 * Description:
 * This function traverses a doubly linked list of type dlistint_t,
 * starting from the node pointed to by @h, and counts the number of nodes.
 * It returns the total count as a size_t value.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
