#include "main_h"

/**
*create_array - a fuction to create an array of a specific char
*
*@size: size of the array
*@c: char to be stored in the array
*
*Return: returns null if s is empty else it returns the array @s
*/


char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

