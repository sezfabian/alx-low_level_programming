#include<stdio.h>

/**
 * print_number - prints integer using putchar
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
int c = 0;
char str[10];

if (n < 0)
{
putchar('-');
n = -n;
}

if (n == 0)
{
putchar('0');
}
else
{
while (n > 0)
{
str[c] = (n % 10) + '0';
n = n / 10;
c++;
}
for (c = c - 1; c >= 0; c--)
printf("%c", str[c]);
}
}
