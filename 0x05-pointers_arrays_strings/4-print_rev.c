#include<stdio.h>

/**
 * print_rev - prints string in reverse
 *
 * @s : string
 *
 *
 * Return : void, correct
 */

void print_rev(char *s)
{
int n;
int count = -1;

for (n = 0; s[n]; n++)
{
count++;
}
for (n = count; n >= 0; n--)
{
putchar(s[n]);
}
putchar('\n');
}
