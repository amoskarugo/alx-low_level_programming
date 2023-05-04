#include <stddef.h>
#include "main.h"

/**
 * check_string - checks if a string has only 0's and 1's
 * @s: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_string(const char *s)
{
	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s != '1' && *s != '0')
			return (0);
		s++;
	}

	return (1);
}


/**
 * binary_to_uint - converts a binary to decimal
 * @b: the binary values
 *
 * Return: decimal number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = 0, base = 1;

	if (!check_string(b))
		return (0);
	while (b[len] != '\0')
		len++;
	while (len)
	{
		decimal += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}

	return (decimal);
}
