#include "lists.h"

/**
 * print_dlistint - prints all nodes in a  dlist
 * @h: pointer to head of list
 * Return: number of chars printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h != NULL)
		{
			printf("%i\n", h->n);
			count++;
			h = h->next;
		}
	}

	return (count);
}

