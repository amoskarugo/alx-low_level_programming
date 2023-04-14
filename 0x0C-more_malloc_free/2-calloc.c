#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_calloc - function to allocate memory for an array using malloc
*@nmemb: size of the array
*@size: size of the elememt
*Return: a pointer to the new allocated array or NULL if it fails
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr, c;
	unsigned int i;

	c = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
