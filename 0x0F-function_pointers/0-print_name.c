#include "main.h"

/**
*print_name - function to print a name
*
*@name: - a pointer to a name variable
*@f: function pointer
*/

void print_name(char *name, void (*f)(char *))

{
	if (f && name)
		(f)(name);
}

