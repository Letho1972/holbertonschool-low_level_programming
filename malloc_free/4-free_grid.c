#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Write a function that frees a two dimensional grid
 * @grid: dimensional grid
 * @height: dimensional grid
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	free(grid);
}
