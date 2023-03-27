#include"main.h"

/**
* swap_int -a function to swap two integers
* @a: parameter
* @b: parameter
*/


void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;


}
