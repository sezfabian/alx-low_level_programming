#include<stdio.h>
/**
 * _strlen - gives length of a string
 *
 * @s : string
 *
 * @n : return value..count of length
 */

int _strlen(char *s)
{
int count = 1;
int n;
for (n = 0; n < count; n++)
{
if (s[n] == '\0')
break;
count++;
}
return (n);
}
