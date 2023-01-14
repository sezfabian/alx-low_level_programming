#include "lists.h"
/**
 * sum_dlistint - sums all nodes in a linked list
 * @head: pointer to head of list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
