#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 3dimensional grid.
*
* @grid: 2d array to free.
* @height: size of array.
*
* Return: Always void.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
