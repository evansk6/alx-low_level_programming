#include "main.h"

/**
 * free_grid -> frees 2 dimnsion
 * @grid: param
 * @height: param
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
