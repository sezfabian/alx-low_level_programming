#include<stdio.h>

/**
 * leet - encode
 * @s1: pointer to char params
 * Return: *s1
 */
char *leet(char *s1)
{
int a;
int j;
char b[] = "ol_ea__t";

for (a = 0; s1[a] != '\0'; a++)
{
for (j = 0; b[j] != '\0'; j++)
{
if (s1[a] == b[j] || s1[a] == (b[j] - 32))
{
s1[a] = j + '0';
}
}
}
return (s1);
}
