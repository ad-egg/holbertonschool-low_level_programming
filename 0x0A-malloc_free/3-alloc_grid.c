#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **grid;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (x = 0; x < y; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}
	return (grid);
}
