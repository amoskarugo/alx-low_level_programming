#include "search_algos.h"

/**
 *print_array - function to print elements of an array.
 *@arr: pointer to an array to print elements from.
 *@start: where to start printing elements.
 *@end: where to stop printing.
 *Return: nothing.
 */


void print_array(int *arr, int start, int end)
{
	int index;

	printf("Searching in array: ");
	for (index = start; index <= end; index++)
	{
		if (index == end)
		{
			printf("%d", arr[index]);
		}
		else
		{
			printf("%d, ", arr[index]);
		}
	}
	printf("\n");
}

/**
 *recursive_search - performs a binary search on an array.
 *@arr: pointer to array to perform binary search
 *@target: value to search in an array.
 *@start: search starting point.
 *@end: search end point.
 *Return: return the index of the value or -1 if value not found.
 */


int recursive_search(int *arr, int target, int start, int end)
{
	int middle = (start + end) / 2;

	if (start > end)
		return (-1);

	print_array(arr, start, end);

	if (arr[middle] == target)
	{
		return (middle);
	}

	if (arr[middle] > target)
	{
		return (recursive_search(arr, target, start, middle - 1));
	}

	if (arr[middle] < target)
	{
		return (recursive_search(arr, target, middle + 1, end));
	}

	return (-1);
}

/**
 *binary_search - implements recursive_search funtion.
 *@array: a pointer to an array to perform binary search.
 *@size: size of the array.
 *@value: value to search for.
 *Return: index of the value on the array
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;

	if (!array)
		return (-1);

	return (recursive_search(array, value, start, end));

}
