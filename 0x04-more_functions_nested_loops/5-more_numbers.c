#include<stdio.h>

/**
 * void more_numbers(void) - prints number 0 to 14 times 10
 *
 * Return: 0 always - sucess.
 */
void more_numbers(void)
{
int a;
int count;

for (count = 1; count <= 10; ++count)
{
for (a = 0; a <= 14; ++a)
{
if (a > 9)
{
_putchar(a / 10 + '0');
}
else
{
_putchar(a % 10 + '0');
}
}
_putchar('\n');
}
}
