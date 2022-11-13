#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: arr pointer to created array, else NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned int a;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arr[a] = min;

	return (arr);
}
