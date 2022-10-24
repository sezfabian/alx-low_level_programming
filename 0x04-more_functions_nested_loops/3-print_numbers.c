#include<stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0 always - sucess.
 */

void print_numbers(void)
{
int a;

for (a = 0; a <= 9; ++a)
{
_putchar(a % 10 + '0');
}
putchar('\n');
}
