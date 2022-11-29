#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node_end - adds node to the end of a list
 * @head: head pointer to start of list
 * @str: string to be copied to new node
 * Return:  temp2 - end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *temp2 = malloc(sizeof(list_t));

	if (head == NULL && str == NULL || temp2 == NULL)
		return (NULL);

	temp2->len = strlen(str);
	temp2->str = strdup(str);
	temp2->next = NULL;

	if (*head == NULL)
	{
		*head = temp2;
		return (temp2);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = temp2;
	}
	return (temp2);
}

