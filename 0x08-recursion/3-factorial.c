#include<stdio.h>

/**
 * factorial - gives factorial of integer n.
 *
 * @n: input integer.
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n > 0)
		return ( n * factorial(n - 1));

	else if (n < 0)
		return (-1);

	else
		return(1);
}
