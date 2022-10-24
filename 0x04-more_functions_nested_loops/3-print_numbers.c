#include<stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0 always - sucess.
 */

void print_numbers(void)
{
int a;

for (a = 48; a <= 57; ++a)
{
putchar(a);
}
putchar('\n');
}
