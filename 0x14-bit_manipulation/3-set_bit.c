#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit at given index to one
 * @n: integer to be bit munipulated
 * @index: poition of bit to be set to 1
 * Return: new int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}

