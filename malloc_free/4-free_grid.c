#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid func
 * @grid: from alloc_grid function
 * @height: height
 *
 * Return: the response
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
