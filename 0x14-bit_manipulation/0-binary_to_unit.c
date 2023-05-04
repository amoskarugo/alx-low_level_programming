#include "main.h"

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
*/
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * str_len - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int str_len(const char *str)
{
	unsigned int position = 0;

	while (str[position] != '\0')
		position++;
	return (position);
}

/**
 * binary_to_uint - Converts a binary number to decimal.
 *
 * @b: A string that contains only 0 and 1 characters.
 *
 * Returns: return decimal number or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	unsigned int base = 1;
	int j;

  if (b == NULL) {
    return 0;
  }

  for (j = str_len(b) - 1; j >= 0; j--) {
    if (b[j] != '0' && b[j] != '1') {
      return 0;
    }
    output = output * 2 + (b[j] - '0');
  }

  return output;
}
