#include<stdio.h>
#include<string.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str : string
 *
 * Return : void, correct
 */

void puts2(char *str)
{
int n;
int l = strlen(str);
for (n = 0; n < l; n++)
{
putchar(str[n]);
n++;
}
}
