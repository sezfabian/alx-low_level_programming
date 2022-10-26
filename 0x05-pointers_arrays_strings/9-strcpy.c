#include<stdio.h>
#include<string.h>

/**
 * *_strcpy - copy pointed string
 *
 * @dest : copied string
 *
 * @src : input string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int n = 0;

while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}

dest[n] = '\0';

return (dest);
}
