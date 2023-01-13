#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end of dlist
 * @head: pointer to head of list
 * @n: integer at new node
 * Return: new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newl;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	newl = malloc(sizeof(dlistint_t));

	if (newl == NULL)
		return (NULL);

	newl->n = n;
	newl->next = NULL;
	if (*head == NULL)
	{
		newl->prev = NULL;
		*head = newl;
		return (newl);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newl;
	newl->prev = temp;

	return (temp);
}

