#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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

	va_start(arguments, format);

	while (format[n] != '\0')
	{
	switch (format[n])
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
		if(strlen(str) == 0 || str == NULL)
			printf("%s", "nil");
		else
			printf("%s", str);
		break;

		default:
			stat = 0;
	}
	if (format[n + 1] != '\0' && stat == 1)
		printf("%s", ", ");
	n++;
	}
	printf("%c", '\n');
	va_end(arguments);
}