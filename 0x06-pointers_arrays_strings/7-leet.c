#include "main.h"

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

for (a = 0; s[a] != '\0'; a++)
{
for (a = 0; b[a] != '\0'; a++)
{
if (s[a] == b[j] || s[a] == (b[j] - 32))
{
s[a] = j + '0';
}
}
}
return (s);
}
