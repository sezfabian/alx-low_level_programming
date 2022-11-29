#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds node to the beginning of a list
 * @head: head pointer to start of list
 * @str: string to be copied to new node
 * Return:  head - beginning of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (head == NULL && str == NULL || temp == NULL)
		return (NULL);

	else
	{
		temp->len = strlen(str);
		temp->str = strdup(str);
		temp->next = *head;
	}

	*head = temp;
return (head);
}

