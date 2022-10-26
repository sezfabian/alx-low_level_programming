#include<stdio.h>
#include<string.h>

/**
 * puts_half - prints half of a string
 *
 * @str : string
 *
 * Return : void, correct
 */

void puts_half(char *str)
{
int n;
int h;
int l = strlen(str);

if (l % 2 != 0)
{
h = (l + 1) / 2;
}
else
{
h = l / 2;
}
for (n = h; n < l; n++)
{
putchar(str[n]);
}
putchar('\n');
}
