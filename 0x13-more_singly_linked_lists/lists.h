#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typdef struct listint
{
	int n;
	struct listint *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
