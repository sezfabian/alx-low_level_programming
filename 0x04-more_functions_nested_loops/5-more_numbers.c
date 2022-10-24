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
for (a = 48; a <= 62; ++a)
{
if (a > 57)
{
putchar(49);
putchar(a - 10);
}
else
{
putchar(a);
}
}
putchar('\n');
}
}
