#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2-dimensional array of integers
 *@width: width of array
 *@height: height of array
 *
 *Return: pointer to 2-dimensional array of ints
 */
int **alloc_grid(int width, int height)
{
	int x, y, a, b;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = (int *) malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
