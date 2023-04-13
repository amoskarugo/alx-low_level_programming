#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (width < 1)
	return (NULL);
if (height < 1)
	return (NULL);

arr = (int **)malloc(sizeof(int *) * height);

if (arr == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	arr[i] = (int *)malloc(width * sizeof(int));
	for (j = 0; j < width; j++)
	{
	arr[i][j] = 0;
	free(arr[i]);
	}
}
	free(arr);

	return (arr);

}

