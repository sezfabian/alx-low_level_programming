#include<stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n : integer to start at
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%i", n);
if (n == 98)
{
break;
}
putchar(',');
n++;
}
}
else
{
while (n >= 98)
{
printf("%i", n);
if (n == 98)
{
break;
}
putchar(',');
n--;
}
}
putchar('\n');
}
