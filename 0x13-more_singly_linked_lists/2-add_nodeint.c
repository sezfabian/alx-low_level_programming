#include "lists.h"

/**
 * add_nodeint - adds node to beginning of linked list
 * @head: pointer to start of linked list
 * @n: integer to be added to list
 *
 * Return: new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (head);
}

