#include "main.h"

/**
 * flip_bits - counts the number of bits to modify
 * to get from one number to the next
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exc = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exc >> j;
		if (current & 1)
			count++;
	}

	return (count);
}

