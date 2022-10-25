#include<stdio.h>

/**
 * rev_string - returns string in reverse
 *
 * @s : string
 *
 *
 * Return : void, correct
 */

void rev_string(char *s)
{
int n;
int count = -1;
int m = 0;

for (n = 0; s[n]; n++)
{
count++;
}
char str[count];
for (n = 0; n <= count; n++)
{
str[n] = s[n];
}
printf(str);
