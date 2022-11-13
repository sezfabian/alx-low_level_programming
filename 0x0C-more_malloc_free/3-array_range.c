#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to created array, else NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned int a;

	if (min > max)
		return (0);

	arr = malloc((max - min) + 1);

	if (arr == 0)
		return(0);

	for (a = 0; min <= max; a++, min++)
		arr[a] = min;

	return (arr);
}

