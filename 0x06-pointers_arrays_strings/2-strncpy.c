#include<stdio.h>

/**
 * *_strncpy - function coppies srtings
 * @dest: pointer to  string
 * @src: pointer to  string
 * @n: integer number to copy
 * Return: return value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a =0;
while(src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while(a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
