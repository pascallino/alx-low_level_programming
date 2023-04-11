#include <stdlib.h>

/**
 * free_grid -free up a 2d array grid
 * @grid: double pointer
 * Description: free space
 * @height: rows of grid
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
