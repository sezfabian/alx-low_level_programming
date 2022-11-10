#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to arr.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
		return (0);

	else
	{
	while (size-)
		arr[size] = c;
	return (arr);
	}
}

