#include "search_algos.h"

/**
 *linear_search - function that implements linear search algorithm.
 *@array: a pointer to the array to search for the value.
 *@size: size of the array.
 *@value: value to search for in the array.
 *Return: -1 if value not found or array is null otherwise index of the value.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
