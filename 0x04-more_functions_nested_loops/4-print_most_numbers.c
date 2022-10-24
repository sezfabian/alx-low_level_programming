#include<stdio.h>

/**
 * print_most_numbers - prints number 0 to 9
 *
 * Return: 0 always - sucess.
 */
void print_most_numbers(void)
{
int a;

for (a = 48; a <= 57; ++a)
{
if (a == 50 || a == 52)
continue;
putchar(a);
}
putchar('\n');
}
