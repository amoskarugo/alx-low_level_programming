#include "function_pointers.h"
#include <stdlib.h>
#include<stdio.h>
/**
*print_name - function to print a name
*
*@name: - a pointer to a name variable
*@f: function pointer
*/

void print_name(char *name, void (*f)(char *))

{

	if (name == NULL || f == NULL)
		return;

	f(name);
}
