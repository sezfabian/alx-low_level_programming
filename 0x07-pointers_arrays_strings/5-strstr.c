#include <stdio.h>

/**
 * _strstr - searches for substring
 * @haystack: string to be checked
 * @needle: substring
 *
 * Return: haystack.
 */

char *_strstr(char *haystack, char *needle)
{
int a, b = 0;
char *st1, *st2, *p;

p = 0;
st1 = haystack;
st2 = needle;

for (a = 0; st1[a] != '\0'; a++)
{
if (st1[a] == st2[b])
{
b++;
}
if (st2[b] == '\0')
{
p = (&haystack[a - b + 1]);
break;
}
}
return (p);
}
