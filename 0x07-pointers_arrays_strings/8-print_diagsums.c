#include <stdio.h>

/**
 * print_diagsums - print sum of array diagonals
 *
 * @a: multidim array
 * @size: size of array dimensions
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{

	int b;
	int c;
	int sum1 = 0;
	int sum2 = 0;

	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (b == c)
			{
				sum1 = sum1 + *(a + b * size + b);
				sum2 = sum2 + *(a + b * size + size - b - 1);
			}
		}
	}
	printf("%i, ", sum1);
	printf("%i", sum2);
	putchar('\n');
}

