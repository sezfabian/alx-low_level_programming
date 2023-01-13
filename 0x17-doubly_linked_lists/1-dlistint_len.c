#include "lists.h"

/**
 * dlistint_len - returns size of dlist
 * @h: pointer to head of list
 * Return: number of chars printed
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
return (count);
}

