#include "main.h"

/**
 * _strncat - combines two strings
 * @dest : pointer to string
 * @src : pointer to string
 * @n : int number of characters to add
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
