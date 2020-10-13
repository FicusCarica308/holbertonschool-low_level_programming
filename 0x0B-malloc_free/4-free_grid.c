#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *free_grid - frees the memory allocated by a given 2d array
 *@grid: the given 2d array
 *@height: the size of the column for the 2d array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid)
}
