#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to head of list
 * @idx: index at which node is added
 * @n: integer at new node
 * Return: new list, NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newl, *temp;
	unsigned int count = 0;

	if (h)
	{
		temp = *h;
		if (idx == 0)
		{
			newl = add_dnodeint(h, n);
			return (newl);
		}
		while (count < idx && temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		if (temp->next == NULL)
		{
			newl = add_dnodeint_end(h, n);
			return (newl);
		}
		if (temp != NULL)
		{
			newl = malloc(sizeof(dlistint_t));
			if (newl == NULL)
				return (NULL);
			newl->n = n;
			newl->next = temp;
			newl->prev = temp->prev;

			(temp->prev)->next = newl;
			temp->prev = newl;
			return (newl);
		}
	}
	return (NULL);
}

