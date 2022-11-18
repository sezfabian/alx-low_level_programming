#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: separator between numbers
 * @n: number of integers
 *
 * Return: sum on success, 0 if n is 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arguments;

	va_start(arguments, n);

	for (a = 0; a < n; a++)
	{
		printf("%i", va_arg(arguments, int));
		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(arguments);
	putchar('\n');
}

