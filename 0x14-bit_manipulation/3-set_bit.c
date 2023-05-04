#include "main.h"

/**
 * set_bit - sets the value of a bit
 * @n: number to set
 * @index: index
 *
 * Return: 1 if
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
