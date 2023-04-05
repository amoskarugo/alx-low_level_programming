#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 *
 * @s: The string to print
 *
 * Return: The string taken as parameter
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
