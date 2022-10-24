#include<stdio.h>


/**
 * print_line - prints line on terminal
 *
 * @n : no of times '\' is printed
 *
 * Return: 0 always - sucess.
 */
void print_line(int n)
{
int count;
int a;
for (a = 1; a <= n; ++a)
{
for (count = 2; count <= a; ++count)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
