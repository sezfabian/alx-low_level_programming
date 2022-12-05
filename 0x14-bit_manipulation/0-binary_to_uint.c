#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - returns decimal of binary input
 * @b: pointer to start of binary digit string
 * Return: dec - decimal value of binary input or else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a, p = 0;
	unsigned int dec = 0;

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '0' || b[a] == '1')
			;
		else
			return (0);
	}

	while (a > 0)
	{
		if (b[a - 1] == '1')
			dec = dec + _pow(2, p);
		a--;
		p++;
	}

	return (dec);
}

/**
 * _pow - returns exponent of integer
 * @base: integr value whose power is needed
 * @index: exponent of the base
 * Return: product - exponent value
 */

unsigned int _pow(unsigned int base, int index)
{
	unsigned int product = 1;

	if (index == 0)
		return (1);

	while (index > 0)
	{
		product *= base;
		index--;
	}
	return (product);
}

