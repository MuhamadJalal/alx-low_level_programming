#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously
* created by your alloc_grid function
*
* @grid: the first dimensional.
* @height: second dimensional.
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}

	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}

	free(grid);
}
