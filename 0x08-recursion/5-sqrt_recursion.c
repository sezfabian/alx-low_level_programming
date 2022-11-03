#include<stdio.h>

/**
 * root - checks if a is square root of n
 *
 * @a: interger
 * @n: interger
 *
 * Return: root
 */

int root(int a, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (a * a < n)
		return (root(a + 1, n));

	else if (a * a == n)
		return (a);

	else
		return (-1);
}

/**
 * _sqrt_recursion - evaluates sqrt of n
 *
 * @n: interger
 *
 * Return: root
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	return (root(a, n));
}

