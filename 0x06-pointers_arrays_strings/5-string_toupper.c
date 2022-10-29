#include<stdio.h>
/**
 * string_toupper - lower to uppercase
 * @s1: pointer to string
 *
 * Return: *s1
 */


char *string_toupper(char *s1)
{
int a;

for (a = 0; s1[a] != '\0'; a++)
{
if (s1[a] >= 'a' && s1[a] <= 'z')
{
s1[a] -= 32;
}
}

return (s1);
}
