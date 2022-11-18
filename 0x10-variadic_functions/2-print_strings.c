#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: separator between strings
 * @n: number of strings
 *
 * Return: sum on success, 0 if n is 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
	va_list arguments;

	va_start(arguments, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(arguments, char*);

		if (str != (NULL))
			printf("%s", str);
		else
			printf("%s", "nil");

		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
}
	va_end(arguments);

	printf("%c", '\n');
}

