#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal
 *
 * @n : no of times '\' is printed
 *
 * Return: 0 always - sucess.
 */
void print_diagonal(int n)
{
int count;
int a;
if (n > 0)
{
for (a = 1; a <= n; ++a)
{
for (count = 2; count <= a; ++count)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
