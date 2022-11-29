#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of elements in a list
 * @h: head pointer to start of list
 * Return:  size_t count, -  size of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
return (count);
}

