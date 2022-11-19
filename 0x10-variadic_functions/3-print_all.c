#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print char, integer, float and string
* @format: format
*/
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int c = 0, stat = 0;
	char *str;

	va_start(arguments, format);
	while (format && format[c] != '\0')
	{
		switch (format[c])
		{ case 'c':
			switch (stat)
			{ case 1: printf(", "); }
			stat = 1;
			printf("%c", va_arg(arguments, int));
			break;
			case 'i':
			switch (stat)
			{ case 1: printf(", "); }
			stat = 1;
			printf("%i", va_arg(arguments, int));
			break;
		case 'f':
			switch (stat)
			{ case 1: printf(", "); }
			stat = 1;
			printf("%f", va_arg(arguments, double));
			break;
		case's':
			switch (stat)
			{ case 1: printf(", "); }
			stat = 1;
			str = va_arg(arguments, char*);
			if (str)
			{ printf("%s", str);
			break; }
			printf("%p", str);
			break; }
		c++;
	}
	printf("\n");
	va_end(arguments);
}
