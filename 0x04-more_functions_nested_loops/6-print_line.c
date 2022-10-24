#include<stdio.h>
#include "main.h"

/**
 * print_line - prints line on terminal
 *
 * @n : no of time '_'is printed
 *
 * Return: 0 always - sucess.
 */
void print_line(int n)
{
int c;

for(c = 1; c <= n; ++c)
{
_putchar('_');
}

_putchar('\n');
}
