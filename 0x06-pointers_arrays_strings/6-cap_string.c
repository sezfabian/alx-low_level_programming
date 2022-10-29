#include<stdio.h>

/**
 * *cap_string - caps all first word letter
 * @s1: pointer to string
 *
 * Return: *s1
 */
char *cap_string(char *s1)
{
int a;

for (a = 0; s1[a] != '\0'; a++)
{
if (a == 0 || s1[a - 1] == ' ' || s1[a - 1] == '\n' || s1[a - 1] == '\t' || s1[a - 1] == '.')
{
if (s1[a] >= 'a') && (s1[a] <= 'z')
{
s1[a] -= 32;
}
}
}
return (s1);
}
