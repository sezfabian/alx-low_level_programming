#include<stdio.h>

/**
 * print_sign - function to print number sign
 *
 * @n: number to be checked
 * Return: 1 - +ve, 0 - 0, -1 - -ve.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
