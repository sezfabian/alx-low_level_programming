#include<stdio.h>

/**
 * _memcpy - function copies memory area.
 * @dest: memory destination.
 * @src: memory source.
 * @n: number of bytes copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
