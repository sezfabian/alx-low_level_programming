#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers \
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  the value to search for
 * Return: index where value is located, -1 otherwise
 */


int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size;

	return (bin_search(array, low, high, value));
}

/**
 * bin_search - searches for a value in a sorted array of integers \
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: min index where value could be located
 * @high: max index where value could be located
 * @value:  the value to search for
 * Return: index where value is located, -1 otherwise
 */


int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	size_t i = low;

	if (array == NULL || low >= high)
		return (-1);

	printf("Searching in array: ");
	for (; i < high; i++)
	{
		if (i != high - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	mid = low + (high - 1 - low) / 2;

	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
		return (bin_search(array, mid + 1, high, value));
	else
		return (bin_search(array, low, mid, value));
}

