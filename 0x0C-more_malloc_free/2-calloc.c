#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to allocated heap.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int a;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return(0);

	for (a =0; a < nmemb; a++)
		ptr[a] = 0;

	return (ptr);
}

