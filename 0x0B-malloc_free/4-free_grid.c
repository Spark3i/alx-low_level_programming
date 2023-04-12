#include "main.h"
#include <stdlib.h>
/**
  *free_grid- frees a two dimensional grid
  *@grid: 2D grid
  *@height: height of grid
  */
void free_grid(int **grid, int height)
{
	int x;
	
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
