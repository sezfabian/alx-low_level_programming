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
int a, b = 0, c = 0;
char *st1, *st2;

st1 = haystack;
st2 = needle;

for (a = 0; st1[a] != '\0'; a++)
{
if (st1[a] == st2[b])
{
b++;
c++;
}
if (st2[b] == '\0')
{
return (&haystack[a - b + 1]);
break;
}
if (st1[a + 1] == '\0')
{
return (0);
break;
}
}
}
