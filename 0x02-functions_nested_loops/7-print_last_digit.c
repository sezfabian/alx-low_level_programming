#include<stdio.h>
#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 *
 * @n: multiple digit number
 * Return: last digit always.
 */
int print_last_digit(int n)
{
if (n < 0)
n = (n * (-1));
int ld;

ld = n % 10;
_putchar(ld);
return (ld);
}
