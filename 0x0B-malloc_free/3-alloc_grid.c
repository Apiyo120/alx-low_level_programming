#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Use nested loop to make a grid.
 * @width: The width input.
 * @height: The height input.
 *
 * Return: Pointer to a 2 dimensional array.
*/

int **alloc_grid(int width, int height);
{
	int **fee;
	int x, y;

	if	(width <= 0; || height <= 0)
		return (NULL);

	fee = malloc(sizeof(int *) * height);

	if	(fee == NULL)
		return (NULL);

	for	(x = 0; x < height; x++)
	{
		fee[x] = malloc(sizeof(int) * width);

		if	(fee[x] == NULL)
		{
			for	(; x >= 0; x--)
				free(fee[x]);
			free(fee);
			return (NULL);
		}
	}
	for	(x = 0; x < height; x++)
	{
		for	(y = 0; y < width; y++)
			fee[x][y] = 0;
	}
	return (fee);
}
