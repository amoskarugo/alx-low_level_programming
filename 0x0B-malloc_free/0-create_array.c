#include "main_h"

char *create_array(unsigned int size, char c)
{
	char *s;

	int i;

	s = malloc(sizeof(char) * size);

	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while(i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s)
}	

