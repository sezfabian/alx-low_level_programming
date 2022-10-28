#include<stdio.h>

/**
 * _strcat - concatenates two strings;
 *
 * @dest : string 1
 *
 * @src : string 2
 *
 * Return : dest cocatenated correct
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
