#include<stdio.h>

/**
 * prime - checks if n is prime
 *
 * @a: integer
 * @n: integer
 *
 * Return: prime indicator
 */

int prime(int a, int n)
{
	if ((n % a == 0 && n != a) || n <= 1)
		return (0);

	else if (n == a)
		return (1);

	else
		return (prime(a + 1, n));
}

/**
 * is_prime_number - evaluates if n is prime
 *
 * @n: integer
 *
 * Return: prime indicator
 */

int is_prime_number(int n)
{
	int a = 2;

	return (prime(a, n));
}

