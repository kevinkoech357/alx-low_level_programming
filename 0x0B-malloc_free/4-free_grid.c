#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory occpied by
 *
 * previous 2d array
 *
 * @grid: 2D array
 *
 * @height: array's height
 *
 * Return: void
 *
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
