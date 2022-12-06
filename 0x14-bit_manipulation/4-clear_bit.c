#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets bit at given index to 0
 * @n: integer to be bit munipulated
 * @index: poition of bit to be set to 0
 * Return: 1 if succesful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == 0 || index >= 64)
		return (-1);

	*n = *n & (~(1 << index));
		return (1);

}

