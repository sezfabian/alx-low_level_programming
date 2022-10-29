#include "main.h"

/**
 * _strncmp - compares srtings
 * @s1 : pointer to  string 1
 * @s2 : pointer to  string 2
 * Return: N - comparason value
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;
int N;
while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
{
a++;
}
N = s1[a] - s2[a];
return (N);
}
