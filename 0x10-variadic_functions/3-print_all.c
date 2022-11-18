#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: inputs format
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	unsigned int a = 0, n = 0, stat = 0;
	char *str;
	va_list arguments;

	while (format[n] != '\0')
	{
		n++;
	}
	va_start(arguments, format);
	while (a < n)
	{
	switch (format[a])
	{
		case 'c':
		stat = 1;
		printf("%c", va_arg(arguments, int));
		break;

		case 'i':
		stat = 1;
		printf("%i", va_arg(arguments, int));
		break;

		case 'f':
		stat = 1;
		printf("%f", va_arg(arguments, double));
		break;

		case 's':
		stat = 1;
		str = va_arg(arguments, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%s", "nil");
		break;

		default:
			stat = 0;
	}
	if (a < n - 1 && stat == 1)
		printf("%s", ", ");
	a++;
	}
	printf("%c", '\n');
	va_end(arguments);
}

