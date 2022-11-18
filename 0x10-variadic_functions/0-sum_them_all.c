#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all variable integers given
 * @n: number of integers
 *
 * Return: sum on success, 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum = 0;
	va_list arguments;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}

