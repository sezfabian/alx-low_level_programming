#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of a linked list
 * @head: pointer to start of list
 * @n: integer to be added to list
 *
 * Return: new list, Null if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = NULL;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newnode;
	}
	return (temp);
}

