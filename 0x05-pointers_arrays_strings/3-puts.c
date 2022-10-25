#include<stdio.h>

/**
 * _puts - prints string to std stdout
 *
 * @str : string
 *
 *
 * Return : void, correct
 */

void _puts(char *str)
{
int n;
for (n = 0; str[n]; n++)
{
putchar(str[n]);
}
}
