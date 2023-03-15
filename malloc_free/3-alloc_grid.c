#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size
 * @height: size 2
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int c1, c2;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
	{
		return (0);
	}

	for (c1 = 0; c1 < height; c1++)
	{
		grid[c1] = malloc(width * sizeof(int));
		if (grid[c1] == 0)
		{
			for (c2 = 0; c2 < c1; c2++)
			{
				free(grid[c2]);
			}
			free(grid);
			return (0);
		}
		for (c2 = 0; c2 < width; c2++)
		{
			grid[c1][c2] = 0;
		}
	}
	return (grid);
}
