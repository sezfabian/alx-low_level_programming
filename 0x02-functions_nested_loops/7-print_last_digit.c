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
int ld;

if (n < 0)
{
n = (n * (-1));
}

ld = n % 10;
_putchar(ld + '0';
return (ld);
}
