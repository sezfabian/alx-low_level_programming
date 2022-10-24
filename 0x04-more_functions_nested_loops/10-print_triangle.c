#include<stdio.h>
#include "main.h"

/**
 * print_triangle - prints a right angle triangle
 *
 * @size: determines base and height of rectangle
 *
 * Return: 0 always - success
 *
 */
void print_triangle(int size)
{
int b;
int h;
int l = size;

for (h = 1; h <= size; ++h)
{
for (b = 0; b < size; ++b)
{
if (b < l - 1)
{
putchar(' ');
}
else
{
putchar('#');
}
}
--l;
putchar('\n');
}
}
