#include <stdio.h>

/**
 * array_iterator -  executes a function given on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function to implement
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	int a;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

