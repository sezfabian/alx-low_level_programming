#include <stdio.h>

/**
 * int_index - returns index of given integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: b index val if positive or -1 if no match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		b = cmp(array[a]);
		if (b == 1)
			return (a);
	}
	return (-1);
}

