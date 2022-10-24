#include<stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints number 0 to 9
 *
 * Return: 0 always - sucess.
 */
void print_most_numbers(void)
{
int a;

for (a = 0; a <= 9; ++a)
{
if (a == 2 || a == 4)
continue;
_putchar(a % 10 + '0');
}
_putchar('\n');
}
