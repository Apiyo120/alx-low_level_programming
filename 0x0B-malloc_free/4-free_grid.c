#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array.
 * @grid: 2d grid.
 * @height: The height dimension of a grid.
 * Description: It frees emory ofa grid.
 *Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	if	(grid == NULL)
		return;

	for	(i = 0;i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
