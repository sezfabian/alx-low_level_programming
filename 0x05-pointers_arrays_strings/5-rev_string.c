#include<stdio.h>
#include<string.h>

/**
 * rev_string - returns string in reverse
 *
 * @s : string
 *
 * Return : void, correct
 */

void rev_string(char *s)
{
int n = 0;
int m = 0;
int l;
char str1[200];

l = strlen(s);

for (n=0; n <= l; n++)
{
str1[n] = s[n];
}

for (n = l+1; n >= 0; n--)
{
s[m] = str1[l-1];
m++;
l--;
}
}
