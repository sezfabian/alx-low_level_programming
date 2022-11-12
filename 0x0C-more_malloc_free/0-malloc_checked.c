#include <stdlib.h>

/**
 * malloc_checked -  that allocates memory using malloc
 *
 * @b: size of memory to be allocated
 *
 * Return: pointer to heap.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	
	if (ptr == 0)
		exit(98);
	return (ptr);
}

