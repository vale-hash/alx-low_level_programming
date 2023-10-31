#include "main.h"
#include <stdlib.h>
/**
* free_grid - function that frees the grid from prevoius function
* @grid: the array
* @height: the height
*/



void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = height; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}


