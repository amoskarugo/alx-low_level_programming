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

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	arr[i] = malloc(width * sizeof(int));
	if (arr[i] == NULL)
	{
		while (i >= 0)
		{
			free(arr[i];
			i--;
		}
		free(arr)
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	arr[i][j] = 0;
	}
}

	return (arr);

}

