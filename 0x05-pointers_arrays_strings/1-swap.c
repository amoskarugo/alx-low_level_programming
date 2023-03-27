#include"main.h"

/**
* swap_int -a function to swap two integers
* @a: parameter
* @b: parameter
*/


void swap_int(int *a, int *b)
{
	int *a;
	int *b;
	int x;

	x = *a + *b;
	*a = x - *a;
	*b = x - *b;

}
