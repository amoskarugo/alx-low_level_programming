#include<stdlib.h>
#include<stdio.h>

/**
*free_grid - free up the 2d array
*
*@grid: it is a double pointer
*@height: height of the grid
*
*Return: nothing to return
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
