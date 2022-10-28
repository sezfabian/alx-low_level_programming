#include<stdio.h>

/**
 * *_strncmp - compares srtings
 * @s1 : pointer to  string
 * @s2 : pointer to  string
 * Return: return value of dest
 */
int _strcmp(char *s1, char *s2)
{
int a =0;
int n;
while(s1[a] != '\0')
{
if (s1[a] < s2[a] || s1[a] > s2[a])
{
n = s1[a] - s2[a];
break;
}
else
{
n = 0;
}
return (n);
}
}
