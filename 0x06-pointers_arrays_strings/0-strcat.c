#include<stdio.h>

/**
 * *_strcat - combine two srtings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;

a = 0;
b = 0;

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
