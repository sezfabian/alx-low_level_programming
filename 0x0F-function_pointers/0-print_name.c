#include <stdio.h>

/**
 * print_name - prints name by desired funtion
 * @name: name to be printed
 * @f: pointer to print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

