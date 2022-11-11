#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - initializes multi dim array
 *
 * @width: no of integers in each dimention
 * @height: number of dimentions
 *
 * Return: pointer to marray.
 */

int **alloc_grid(int width, int height)
{
	int **marray;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	marray = malloc(height * sizeof(int *));

	if (marray == NULL)
	{
		free(marray);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		marray[a] = malloc(width * sizeof(int));
		if (marray[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(marray[a]);

			free(marray);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			marray[a][b] = 0;

	return (marray);
}

