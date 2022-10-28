#include "main.h"

/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;
b = 0;

while (dest[a] != '\0')
{
a++;
}
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
