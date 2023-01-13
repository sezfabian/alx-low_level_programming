#include "lists.h"
/**
 * add_dnodeint - adds node to beginning of dlist
 * @head: pointer to head of list
 * @n: integer at new node
 * Return: pointer to new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newl;

	if (!head)
		return (NULL);
	newl = malloc(sizeof(dlistint_t));
	if (newl == NULL)
		return (NULL);

	newl->n = n;
	newl->prev = NULL;
	newl->next = *head;
	*head = newl;

	if (newl->next != NULL)
		(newl->next)->prev = new;

	return (newl);
}

