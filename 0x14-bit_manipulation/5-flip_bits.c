#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns no of bits to flip from one no to another
 * @n: integer onw
 * @m: integer2
 * Return: count - no of bits if succesful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int dif;

	dif = n ^ m;

	while (dif)
	{
		count += dif & 1;
		dif = dif >> 1;
	}

	return (count);
}

