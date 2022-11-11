#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - frees a mulidim array allocated memory
 *
 * @grid: multidim array
 * @height: number of dimentions
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);

		free(grid);
	}
}

