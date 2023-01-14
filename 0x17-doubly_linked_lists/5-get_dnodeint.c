#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: pointer to pointer to head of list
 * @index: node to be accessed
 * Return: node at index, NULL if does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		unsigned int count = 0;

		while (count < index && head != NULL)
		{
			head = head->next;
			count++;
		}
		if (head != NULL)
			return (head);
	}
	return (NULL);
}

