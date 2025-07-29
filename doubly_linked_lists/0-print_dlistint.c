#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Constant pointer to the head of the doubly linked list.
 *
 * Return: The total number of nodes in the list.
 *
 * Description:
 * This function traverses a doubly linked list of type dlistint_t
 * starting from the node pointed to by @h. For each node, it prints
 * the integer value stored in the `n` field, followed by a newline.
 * It returns the total number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
