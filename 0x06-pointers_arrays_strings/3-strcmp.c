#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1 : pointerto string1
 * @s2 : pointer to string2
 * Return: N success
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
