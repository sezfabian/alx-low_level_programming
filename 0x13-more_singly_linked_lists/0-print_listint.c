#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}

