#include<stdio.h>
#include<string.h>

/**
 * print_array - prints number of array eements
 *
 * @a : array
 *
 * @n : no of ellements
 *
 * Return : void, correct
 */

void print_array(int *a, int n)
{
int c;

for (c = 0; c < n;c++)
{
printf("%d", a[c]);
if (c == n - 1)
{
break;
}
putchar(',');
putchar(' ');
}
}
