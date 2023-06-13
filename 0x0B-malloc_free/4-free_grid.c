/*
 * File: 4-free_grid.c
 * Author: Chukwuka Akibor
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the grid itself */
	free(grid);
}
