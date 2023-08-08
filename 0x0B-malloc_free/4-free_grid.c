#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array created in 3-alloc_grid from the memory
 * @grid: 2d grid
 * @height: Height dimension of grid
 *
 * Return: Nothing
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
