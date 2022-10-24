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
int count;

for (count = 1; count <= n; ++count)
{
_putchar('_');
}

_putchar('\n');
}
