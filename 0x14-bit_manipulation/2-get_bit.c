#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns bit at selected index
 * @n: integer whose bits are to be indexed
 * @index: bit location
 * Return: bit value or -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);
	if ((n & (1 << index)) != 0)
		return (1);
	else
		return (0);
}
