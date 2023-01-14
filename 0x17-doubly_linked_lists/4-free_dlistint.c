#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to pointer to head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		dlistint_t *temp;

		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head =temp;
		}
	}
}
