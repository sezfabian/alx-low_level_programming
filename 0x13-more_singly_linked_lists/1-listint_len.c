#include "lists.h"

/**
 * listint_len - returns number of elements in the linked list
 * @h: pointer to start of linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h++;
		h = h->next;
	}
	return (n);
}

