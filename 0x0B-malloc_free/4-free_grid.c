#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @height: height input used
 * @grid: 2 dimensional grid
 * Return: Not specified
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
