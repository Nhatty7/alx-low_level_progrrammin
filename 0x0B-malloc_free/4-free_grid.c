#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
  * free_grid - empty allocated grid
  * @grid: grid
  * @height: height of grid
  *
  * Return: void
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
