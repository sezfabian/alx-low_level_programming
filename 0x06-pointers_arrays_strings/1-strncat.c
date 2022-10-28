#include "main.h"

/**
 * *_strcat - concatenates two strings for n integers
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * @n: number of characters to be added
 *
 * Return:  returns dest
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
