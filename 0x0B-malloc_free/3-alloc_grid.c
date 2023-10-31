#include "main.h"
#include <stdlib.h>


int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
free(grid);
}

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
return (NULL);
free(grid);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}


