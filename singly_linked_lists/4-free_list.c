#include "lists.h"
#include <stdlib.h>


/**
 * free_list - Frees a linked list of type list_t
 * @head: Pointer to the first node of the list
 *
 * This function iterates through the linked list and frees
 * each node, including the string stored in each node.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}