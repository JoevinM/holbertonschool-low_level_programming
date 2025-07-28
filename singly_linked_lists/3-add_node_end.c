#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 *
 * Description: This function creates a new node, duplicates the given string,
 * calculates its length, and inserts the node at the end of the linked list.
 * If the list is empty, the new node becomes the head.
 * If memory allocation fails, the function returns NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;


	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new->len = len;
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

	return (new);
}
