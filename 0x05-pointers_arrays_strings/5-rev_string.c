#include<stdio.h>

/**
 * rev_string - returns string in reverse
 *
 * @s : string
 *
 * Return : void, correct
 */

void rev_string(char *s)
{
int n;
int count = -1;
int m = 0;
char str[n];

for (n = 0; s[n]; n++)
{
count++;
str[n] = s[n];
}

for (n = count; n >= 0; n--)
{
s[m] = str[n];
m++;
}
putchar('\n');
}
